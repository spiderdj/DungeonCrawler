#include "stdafx.h"
#include "AssetManager.h"


AssetManager::AssetManager()
{
}


AssetManager::~AssetManager()
{
}

sf::Texture* AssetManager::loadTexture(sf::String texturePath)
{

	if (loadedTextures.find(texturePath) != loadedTextures.end())
	{
		return loadedTextures.at(texturePath);
	}
	else
	{
		sf::Texture* loadedTexture = new sf::Texture;
		loadedTexture->loadFromFile(texturePath);
		return loadedTexture;
	}

}

sf::Texture* AssetManager::loadTextureFromFile(sf::String filePath,sf::Rect srcRect,)
{

}
