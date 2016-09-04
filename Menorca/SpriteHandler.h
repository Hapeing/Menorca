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

	//Removes the last x slots in the array.
	//Returns nr of elements removed.
	int removeSize(int slots = 5);
	//returns the index
	int addTexture(std::string filename);
public:
	SpriteHandler(int slots = 5);
	virtual ~SpriteHandler();

	//returns the index
	//NOT IMPLEMENTED
	int addSprite(sf::Sprite sprite);
	//returns the index
	int addSprite(std::string filename);

	int getNrOfElements() const { return this->nrOfElements; }
	int getNrOfSlots() const { return this->nrOfSlots; }

	//Sets size to current number of Elements.
	//Returns true if size WAS changed.
	//NOT IMPLEMENTED
	bool Compress();
};

#endif // !SPRITEHANDLER_H
