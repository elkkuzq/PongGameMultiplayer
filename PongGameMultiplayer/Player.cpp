#include "Player.h"

Player::Player(sf::Vector2u window_size, PlayerType in_player_type)
	: player_velo(window_size.y),
	  player_type(in_player_type)
{
	if (player_type == PlayerType::Left) {<
		setPosition(sf::Vector2f(getSize().x + 10, window_size.y / 2));
	}
	else {
		setPosition(sf::Vector2f(window_size.x - getSize().x - 10, window_size.y / 2));
	}
}

void Player::moveUp(float dt)
{
	move(sf::Vector2f(0, -player_velo* dt));
}

void Player::moveDown(float dt)
{
	move(sf::Vector2f(0, player_velo * dt));
}
