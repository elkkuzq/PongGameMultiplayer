#include "utils.h"
#include <iostream>


sf::Vector2f sf::normalize(sf::Vector2f v)
{
	float length = sqrt(v.x * v.x + v.y * v.y);
	v.x /= length;
	v.y /= length;
	return v;
}

float sf::dotProduct(sf::Vector2f a, sf::Vector2f b)
{
	return a.x * b.x + a.y * b.y;
}

float sf::deg2rad(float x)
{
	return (sf::PI / 180.0f) * x;
}

float sf::rad2deg(float x)
{
	return (180.0f / PI) * x;
}
