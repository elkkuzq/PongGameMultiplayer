#pragma once
#include <SFML/Graphics.hpp>


class PongBall : public sf::RectangleShape
{
public:
	PongBall(sf::Vector2f pos, sf::Vector2f velo);
	sf::Vector2f getVelo() const;
	void setDirection(sf::Vector2f v);
	void updatePos(float dt);

private:

	sf::Vector2f velo;
};

