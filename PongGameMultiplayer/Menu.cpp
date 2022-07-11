#include "Menu.h"
Menu::Menu(sf::RenderWindow& in_window)
	:
	playButton(sf::Vector2f(in_window.getSize().x / 2 - 50, in_window.getSize().y / 2 - 50), sf::Vector2f(100, 50), sf::Color::White, "Play", sf::Color::Black, "font.ttf"),
	leaveButton(sf::Vector2f(in_window.getSize().x / 2 - 50, in_window.getSize().y / 2 + 50), sf::Vector2f(100, 50), sf::Color::White, "Leave", sf::Color::Black, "font.ttf"),
	window(in_window)
{
	playButton.setTextPosition({ 20, 8 });
	leaveButton.setTextPosition({ 3, 10 });
}

void Menu::Update()
{
	playButton.negativeColorStyle();
	leaveButton.negativeColorStyle();
	if (playButton.isPressed() && !isPlayClicked) {
		isPlayClicked = true;
	}
	else if (leaveButton.isPressed()) {
		isLeaveClicked = true;
	}
}

void Menu::Draw() const
{
	playButton.draw(window, sf::RenderStates::Default);
	leaveButton.draw(window, sf::RenderStates::Default);
}

bool Menu::IsPlayClicked()
{
	return isPlayClicked;
}

void Menu::SetIsPlayClicked(bool value)
{
	isPlayClicked = value;
}

bool Menu::IsLeaveClicked()
{
	return isLeaveClicked;
}
