#pragma once
#include <SFML\Graphics.hpp>
class Screen
{
public:
	Screen();
	virtual ~Screen();
	virtual void Update(float deltaTime);
	virtual void Draw(sf::RenderWindow* window);
};

