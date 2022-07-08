#include "Player.h"

Player::Player(sf::Vector2u window_size, PlayerType in_player_type)
	: player_velo(static_cast<float>(window_size.y)),
	  player_type(in_player_type)
{
	setSize(sf::Vector2f(window_size.x / 40.0f, window_size.y / 10.0f));

	if (player_type == PlayerType::Left) {
		setPosition(sf::Vector2f(0, window_size.y / 2));
	}
	else {
		setPosition(sf::Vector2f(window_size.x - getSize().x, window_size.y / 2));
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

void Player::addScore()
{
	++score;
}

int Player::getScore()
{
	return score;
}
