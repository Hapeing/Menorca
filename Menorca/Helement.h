#ifndef HELEMENT_H
#define HELEMENT_H
#include <SFML\Graphics.hpp>

class HElement : public sf::Drawable
{
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
protected:
	int pos;
public:
	HElement(int pos) {
		this->pos = pos;
	}
	virtual ~HElement() {}

	int getPos() {
		return this->pos;
	}

};
#endif // !HELEMENT_H
