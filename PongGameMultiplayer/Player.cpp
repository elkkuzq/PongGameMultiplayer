#include "Player.h"

Player::Player(sf::Vector2u windowSize, PlayerType playerType)
{

}

void Player::MoveUp(float deltatime)
{
	move(sf::Vector2f(0, -120));
}

void Player::MoveDown(float deltatime)
{
	move(sf::Vector2f(0, 120));
}
