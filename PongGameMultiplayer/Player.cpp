#include "Player.h"

Player::Player(sf::Vector2u window_size, PlayerType in_player_type)
	: player_velo(window_size.y),
	  player_type(in_player_type)
{

}

void Player::moveUp(float dt)
{
	move(sf::Vector2f(0, -player_velo* dt));
}

void Player::moveDown(float dt)
{
	move(sf::Vector2f(0, player_velo * dt));
}
