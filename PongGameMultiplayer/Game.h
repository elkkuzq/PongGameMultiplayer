#pragma once
#include <SFML/Graphics.hpp>
#include "PongBall.h"
#include "FrameTimer.h"

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
	GameState game_state;
	sf::RenderWindow window;
	PongBall ball;
};