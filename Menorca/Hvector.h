#ifndef HVECTOR_H
#define HVECTOR_H
#include "Helement.h"

class HVector : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	HElement** elements;
	int nrOfElements;
	int nrOfSlots;

	void addSize(int slots = 5);
	void removeSize(int slots = 5);
	bool autoChangeSize();//return true if size was changed
public:
	HVector(int slots = 5);
	virtual ~HVector();


	int getNrOfElements() const { return this->nrOfElements; }
	int getNrOfSlots() const { return this->nrOfSlots; }

	bool setSizeToCurrentElements();//return true if size was changed
};

#endif // !HVECTOR_H
