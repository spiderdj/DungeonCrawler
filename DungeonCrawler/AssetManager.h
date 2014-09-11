#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
class AssetManager
{
public:
	AssetManager();
	~AssetManager();
	sf::Texture* loadTexture(sf::String texturePath);

private:
	std::map<sf::String, sf::Texture*> loadedTextures;
	sf::Texture* loadTextureFromFile(sf::String filePath);
};

