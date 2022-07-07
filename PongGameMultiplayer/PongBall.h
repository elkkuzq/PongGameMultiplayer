#pragma once
#include <SFML/Graphics.hpp>


class PongBall : public sf::RectangleShape
{
public:
	PongBall(sf::Vector2f pos, sf::Vector2f velo);
private:
	sf::Vector2f velo;
};

