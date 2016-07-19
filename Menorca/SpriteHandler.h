#ifndef SPRITEHANDLER_H
#define SPRITEHANDLER_H
#include <SFML\Graphics.hpp>


class SpriteHandler : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	sf::Sprite* sprites;
	sf::Texture* textures;
	int nrOfElements;
	int nrOfSlots;

	void addSize(int slots = 5);

	//removes the last slots in the array
	//returns true if no elements where removed
	bool removeSize(int slots = 5);

public:
	SpriteHandler(sf::Sprite sprite, int slots = 5);
	virtual ~SpriteHandler();

	//returns the index
	int addSprite(sf::Sprite sprite);

	int getNrOfElements() const { return this->nrOfElements; }
	int getNrOfSlots() const { return this->nrOfSlots; }

	//sets size to current number of Elements
	//returns true if size was changed
	bool Compress();
};

#endif // !SPRITEHANDLER_H
