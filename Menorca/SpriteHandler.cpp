#include "SpriteHandler.h"

void SpriteHandler::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < this->nrOfElements; i++)
	{
		target.draw(this->sprites[i]);
	}
}

void SpriteHandler::addSize(int slots)
{
}

int SpriteHandler::removeSize(int slots)
{
	return 0;
}

SpriteHandler::SpriteHandler(int slots)
{
	//inte 1 sprite per texture??
	this->nrOfElements = 0;
	this->nrOfSlots = slots;
	this->sprites = new sf::Sprite[slots];
	this->textures = new sf::Texture[slots];
}

SpriteHandler::~SpriteHandler()
{
}

int SpriteHandler::addSprite(sf::Sprite sprite)
{


	return 0;
}

bool SpriteHandler::Compress()
{
	return false;
}
