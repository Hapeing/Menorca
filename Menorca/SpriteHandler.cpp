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
	sf::Texture* newArr = new sf::Texture[this->nrOfSlots + slots];
	for (int i = 0; i < this->nrOfElements; i++)
	{
		newArr[i] = this->textures[i];
	}
	sf::Texture* temp = this->textures;
	this->textures = newArr;
	newArr = nullptr;
	delete[]temp;
}

int SpriteHandler::removeSize(int slots)
{
	return 0;
}

int SpriteHandler::addTexture(std::string filename)
{
	if (this->nrOfElements + 1 > this->nrOfSlots)
	{
		this->addSize();
	}
	this->textures[nrOfElements++].loadFromFile(filename);
	return this->nrOfElements - 1;
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
	delete[]this->textures;
	delete[]this->sprites;
}

int SpriteHandler::addSprite(sf::Sprite sprite)
{


	return 0;
}

int SpriteHandler::addSprite(std::string filename)
{
	this->sprites[this->nrOfElements++].setTexture(this->textures[this->addTexture(filename)]);
	return this->nrOfElements - 1;
}

bool SpriteHandler::Compress()
{
	return false;
}
