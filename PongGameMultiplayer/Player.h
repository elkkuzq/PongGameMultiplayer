#pragma once
#include <SFML/Graphics.hpp>

enum PlayerType {
	Left,
	Right
};


class Player : public sf::RectangleShape
{
public:
	Player(sf::Vector2u window_size, PlayerType in_player_type);
	void moveUp(float dt);
	void moveDown(float dt);
	void addScore();
	int getScore();

private:
	// Member variables
	PlayerType player_type;
	const float player_velo;
	int score = 0;
};

