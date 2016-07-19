#ifndef BOUNDINGBOXHANDLER
#define BOUNDINGBOXHANDLER
#include "BoundingBox.h"
#include <SFML\Graphics.hpp>

class BoundingBoxHandler : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	BoundingBox* boundingBoxes;
	int nrOfBoundingBoxes;
	int size;

public:
	BoundingBoxHandler();
	virtual ~BoundingBoxHandler();

	//returns indexPos
	int addBoundingBox(BoundingBox BB);

};

#endif // !BOUNDINGBOXHANDLER
