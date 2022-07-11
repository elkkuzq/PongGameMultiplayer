#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"

class Menu
{
public:
	Menu(sf::RenderWindow& in_window);
	void Update();
	virtual void Draw() const;
	bool IsPlayClicked();
	void SetIsPlayClicked(bool value);
	bool IsLeaveClicked();
private:
	Button playButton;
	Button leaveButton;
	sf::RenderWindow& window;
	bool isPlayClicked = false;
	bool isLeaveClicked = false;
};