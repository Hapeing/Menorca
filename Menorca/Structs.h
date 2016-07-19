#ifndef STRUCTS_H
#define STRUCTS_H

struct H2i {
	int x;
	int y;
	H2i(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
};

struct H2f {
	float x;
	float y;
	H2f(float x = 0, float y = 0) {
		this->x = x;
		this->y = y;
	}
};

#endif // !STRUCTS_H
