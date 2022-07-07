#include "PongBall.h"
#include "utils.h"


PongBall::PongBall(sf::Vector2f pos, sf::Vector2f velo)
	: velo(velo)
{
	setFillColor(sf::Color::White);
	setSize(sf::Vector2f(50, 50)); // Maby calculate size from window dimensions?
	setPosition(pos);
}

sf::Vector2f PongBall::getVelo() const
{
	return velo;
}

void PongBall::setDirection(sf::Vector2f v)
{
	constexpr float BALL_VELO = 1000.0f; // Pixels per seconds
	velo = sf::normalize(v) * BALL_VELO;
}

void PongBall::updatePos(float dt)
{
	move(velo * dt);
}
