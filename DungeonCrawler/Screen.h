#pragma once
#include <SFML\Graphics.hpp>
#include "GameCore.h"
class Screen
{
public:
	Screen(GameCore* core);
	virtual ~Screen();
	virtual void Update(float deltaTime);
	virtual void Draw(sf::RenderWindow* window);

protected:
	sf::View myView;
	GameCore* gameCore;

};

