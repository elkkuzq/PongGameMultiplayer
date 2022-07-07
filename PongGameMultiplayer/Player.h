#pragma once
#include <SFML/Graphics.hpp>

enum PlayerType {
	Left,
	Right
};


class Player : public sf::RectangleShape
{
public:
	Player(sf::Vector2u windowSize, PlayerType playerType);

	// Public Functions
	void MoveUp(float deltatime);
	void MoveDown(float deltatime);

private:
	// Private Functions
	

private:
	//Variables
	PlayerType player_type;

};

