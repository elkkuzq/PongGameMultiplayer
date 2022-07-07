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

	// Public Functions
	void moveUp(float dt);
	void moveDown(float dt);

private:
	// Private functions
	

	// Member variables
	PlayerType player_type;
	const float player_velo;
};

