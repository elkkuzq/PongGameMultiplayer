#include "PongBall.h"


PongBall::PongBall(sf::Vector2f pos, sf::Vector2f velo)
	: velo(velo)
{
	setFillColor(sf::Color::White);
	setSize(sf::Vector2f(50, 50)); // Maby calculate size from window dimensions?
	setPosition(pos);
}
