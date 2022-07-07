#include "Game.h"
#include "utils.h"

Game::Game()
	: window(sf::VideoMode(1200, 800), GAME_NAME, sf::Style::Fullscreen),
	ball(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f), sf::Vector2f(0, 0)),
	game_state(GameState::Start),
	left_player(window.getSize(), PlayerType::Left),
	right_player(window.getSize(), PlayerType::Right)
{
	srand(static_cast<unsigned int>(time(NULL)));
}

void Game::run()
{
	while (game_state != GameState::Quit)
	{
		setup();

		while (game_state == GameState::Run)
		{
			handleInput();
			update();
			render();
		}
	}
}

void Game::setup()
{
	// Set ball to center
	ball.setPosition(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f));

	// Randomize initial direction
	int x = 100;
	float angle = -0.5f * sf::PI * ((float)(rand() % x) / x) + 0.5f * sf::PI/2;
	sf::Vector2f velo(cos(angle), sin(angle));
	ball.setDirection(velo);

	// Start game
	game_state = GameState::Run;
}

void Game::setup()
{
	// Set ball to center
	ball.setPosition(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f));

	// Randomize initial direction
	int x = 100;
	float angle = -0.5f * sf::PI * ((float)(rand() % x) / x) + 0.5f * sf::PI / 2;
	sf::Vector2f velo(cos(angle), sin(angle));
	ball.setDirection(velo);

	// Start game
	game_state = GameState::Run;
}

void Game::handleInput()
{
	sf::Event event;
	window.pollEvent(event);

	// Check if user wants to quit
	if (event.type == sf::Event::Closed)
	{
		game_state = GameState::Quit;
	}
	if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Key::Escape)
	{
		game_state = GameState::Quit;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		left_player.moveUp(dt);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		left_player.moveDown(dt);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
	{
		left_player.moveUp(dt);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
	{
		left_player.moveDown(dt);
	}
}

void Game::update()
{
	dt = frame_timer.mark();
	ball.updatePos(dt);

	// Handle collisions
	sf::FloatRect ball_rect = ball.getGlobalBounds();

	sf::Vector2f new_direction = ball.getVelo();

	// Hits ceiling?
	if (ball_rect.top <= 0)
	{
		new_direction.y = std::abs(new_direction.y); // Make sure ball is going down
	}
	// Hits floor?
	if (ball_rect.top + ball_rect.height >= window.getSize().y)
	{
		new_direction.y = -std::abs(new_direction.y); // Make sure ball is going up
	}

	// FOR TESTING ONLY
	if (ball_rect.left <= 0)
	{
		new_direction.x = std::abs(new_direction.x);
	}
	if (ball_rect.left + ball_rect.width >= window.getSize().x)
	{
		new_direction.x = -std::abs(new_direction.x);
	}

	ball.setDirection(new_direction);
}

	// FOR TESTING ONLY
	if (ball_rect.left <= 0)
	{
		new_direction.x = std::abs(new_direction.x);
	}
	if (ball_rect.left + ball_rect.width >= window.getSize().x)
	{
		new_direction.x = -std::abs(new_direction.x);
	}

	ball.setDirection(new_direction);
}

void Game::render()
{
	window.clear();
	window.draw(ball);
	window.display();
}


