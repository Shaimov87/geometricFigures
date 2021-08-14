#include<iostream>
#include<math.h>

using namespace std;

const double Pi = 3.14;

class Figure {
public:
	virtual double area() = 0;
	virtual double perimetr() = 0;
	virtual void paint() = 0;
};
class Circle:public Figure {
	double radius;
public:
	Circle() :radius(1) {
	}
	Circle(double radius) :radius(radius) {
	}
	double get_radius() {
		return this->radius;
	}
	void set_radius(double radius) {
		this->radius = radius;
	}
	~Circle() {
	}
	double area() {
		return Pi * pow(radius, 2);
	}
	double perimetr() {
		return 2 * Pi * radius;
	}
	void paint() {
		cout << "\tCircle\t\t r=" << radius << "\tP=" << perimetr() << "\tS=" << area() << endl;
	}
};
class Triangle :public Figure {
	double sideA;
	double sideB;
	double sideC;
public:
	Triangle() :sideA(1), sideB(1), sideC(1) {
	}
	Triangle(double sideA, double sideB, double sideC) :sideA(sideA), sideB(sideB), sideC(sideC) {
	}
	~Triangle() {
	}
	double area() {
		double p = (sideA + sideB + sideC) / 2;
		return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
	}
	double perimetr() {
		return sideA + sideB + sideC;
	}
	void paint() {
		cout << "\tTriangle\t a=" << sideA << " b=" << sideB << " c=" << sideC << " S=" << area() << " P=" << perimetr() << endl;
	}
};
class Squared :public Figure {
	double side;
public:
	Squared() :side(1) {
	}
	Squared(double side) :side(side) {
	}
	~Squared() {
	}
	double get_side() {
		return side;
	}
	void set_side(double side) {
		this->side = side;
	}
	double area() {
		return pow(side, 2);
	}
	double perimetr() {
		return 4 * side;
	}
	void paint() {
		cout << "\tSquared\t\ta= " << side << "\tS=" << area() << "\tP=" << perimetr() << endl;
	}
};
class Rectangel :public Figure {
	double sideA;
	double sideB;
public:
	Rectangel() :sideA(1), sideB(1) {
	}
	Rectangel(double sideA, double sideB) :sideA(sideA), sideB(sideB) {
	}
	~Rectangel() {
	}
	double area() {
		return sideA * sideB;
	}
	double perimetr() {
		return (2 * sideA) + (2 * sideB);
	}
	void paint() {
		cout << "\tRectangel\ta=" << sideA << " b=" << sideB << " S=" << area() << " P=" << perimetr() << endl;
	}
};
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