#pragma once
#include <SFML\Graphics.hpp>
#include "Screen.h"
class GameCore
{
public:
	GameCore();
	~GameCore();
	void Run();
	void ProcessEvents(sf::RenderWindow* window);

	void Update(float deltaTime);
	void Draw(sf::RenderWindow* window);

	void ChangeScreen(Screen* screen);
protected:
	Screen* currentScreen = 0;
};

