#include "Button.h"
#include <iostream>
Button::Button(sf::Vector2f position, sf::Vector2f size, sf::Color button_color, std::string button_text, sf::Color text_color, std::string fontPath)
{
	font.loadFromFile(fontPath);
	shape.setPosition(position);
	shape.setSize(size);
	shape.setFillColor(button_color);

	text.setFont(font);
	text.setString(button_text);
	text.setCharacterSize(size.y / 2);
	text.setFillColor(text_color);
	text.setPosition(position);

	shapeColor = button_color;
	textColor = text_color;
}


bool Button::isCollide()
{
	return shape.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition());
}

bool Button::isPressed()
{
	return shape.getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition()) && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left);
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape, states);
	target.draw(text, states);
}

void Button::negativeColorStyle()
{
	if (isCollide()) {
		setTextColor(shapeColor);
		setShapeColor(textColor);
	}
	else {
		setTextColor(textColor);
		setShapeColor(shapeColor);
	}
}

void Button::setTextPosition(sf::Vector2f offset)
{
	text.setPosition(text.getPosition() + offset);
}

void Button::setTextColor(sf::Color color)
{
	text.setFillColor(color);
}

void Button::setShapeColor(sf::Color color)
{
	shape.setFillColor(color);
}
