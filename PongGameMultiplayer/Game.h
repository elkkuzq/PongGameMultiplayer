#pragma once
#include <SFML/Graphics.hpp>
#include "PongBall.h"
#include "Player.h"

constexpr const char* GAME_NAME = "PongGameMultiplayer";

class Game
{
public:
	Game();
	void run();
private:
	// Game loop functions
	void handleInput();
	void update();
	void render();

	// Member variables
	sf::RenderWindow window;
	Player playerLeft;
	Player playerRight;
};

