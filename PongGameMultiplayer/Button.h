#pragma once
#include <SFML/Graphics.hpp>


class Button : sf::Drawable
{
public:
	Button(sf::Vector2f position, sf::Vector2f size, sf::Color color, std::string button_text, sf::Color text_color, std::string fontPath);
	bool isCollide();
	bool isPressed();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void negativeColorStyle();
	void setTextPosition(sf::Vector2f offset);
	void setTextColor(sf::Color color);
	void setShapeColor(sf::Color color);
private:
	//Variables
	sf::Color textColor;
	sf::Color shapeColor;
	sf::RectangleShape shape;
	sf::Text text;
	sf::Font font;
};

