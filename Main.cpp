


#include"Class.h"



int main() {

	Figure* group[] =
	{
		new Circle(3),
		new Triangle(3,4,5),
		new Squared(4),
		new Rectangel(3,5)
	};
	for (int i = 0; i < sizeof(group) / sizeof(Figure*); i++) {
		group[i]->paint();
	}

	return 0;
}