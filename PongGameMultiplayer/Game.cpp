#include "Game.h"

Game::Game()
	: window(sf::VideoMode(800, 600), GAME_NAME, sf::Style::Fullscreen)
{
}

void Game::run()
{
	handleInput();
	update();
	render();
}

void Game::handleInput()
{
}

void Game::update()
{
}

void Game::render()
{
}
