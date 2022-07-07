#pragma once
#include <SFML/Graphics.hpp>

namespace sf
{
	constexpr float PI = 3.1415926f;
	sf::Vector2f normalize(sf::Vector2f v);
	float dotProduct(sf::Vector2f a, sf::Vector2f b);
	float deg2rad(float x);
	float rad2deg(float x);
}
