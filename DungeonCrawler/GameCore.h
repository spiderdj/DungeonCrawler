#pragma once
#include <SFML\Graphics.hpp>
class Screen;
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
	
	static int const resX;
	static int const resY;

	sf::RenderWindow* currentWindow;

protected:
	Screen* currentScreen = 0;
};

