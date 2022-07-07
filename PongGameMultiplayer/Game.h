#pragma once
#include <SFML/Graphics.hpp>
#include "PongBall.h"
#include "FrameTimer.h"
#include "Player.h"

constexpr const char* GAME_NAME = "PongGameMultiplayer";

enum class GameState
{
	Start,
	Run,
	Quit
};

class Game
{
public:
	Game();
	void run();
private:
	// Game loop functions
	void setup();
	void handleInput();
	void update();
	void render();

	// Helper functions

	// Member variables
	FrameTimer frame_timer;
	float dt = 0.0f;
	GameState game_state;
	sf::RenderWindow window;
	sf::Font font;
	sf::Text score_text;
	PongBall ball;
	Player left_player;
	Player right_player;
};