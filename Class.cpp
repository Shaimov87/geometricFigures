#include"Class.h"
Circle::Circle() :radius(1) {
}
Circle::Circle(double radius) : radius(radius){}
double Circle::get_radius() {
	return this->radius;
}
void Circle::set_radius(double radius) {
	this->radius = radius;
}
Circle::~Circle() {
}
double Circle::area() {
	return Pi * pow(radius, 2);
}
double Circle::perimetr() {
	return 2 * Pi * radius;
}
void Circle::paint() {
	cout << "\tCircle\t\t r=" << radius << "\tP=" << perimetr() << "\tS=" << area() << endl;
}

Triangle::	Triangle() :sideA(1), sideB(1), sideC(1) {
	}
Triangle::Triangle(double sideA, double sideB, double sideC) :sideA(sideA), sideB(sideB), sideC(sideC) {
	}
Triangle::	~Triangle() {
	}
	double Triangle::area() {
		double p = (sideA + sideB + sideC) / 2;
		return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
	}
	double Triangle::perimetr() {
		return sideA + sideB + sideC;
	}
	void Triangle::paint() {
		cout << "\tTriangle\t a=" << sideA << " b=" << sideB << " c=" << sideC << " S=" << area() << " P=" << perimetr() << endl;
	}

	
	Squared::	Squared() :side(1) {
		}
	Squared::Squared(double side) :side(side) {
		}
	Squared::	~Squared() {
		}
		double Squared::get_side() {
			return side;
		}
		void Squared::set_side(double side) {
			this->side = side;
		}
		double Squared::area() {
			return pow(side, 2);
		}
		double Squared::perimetr() {
			return 4 * side;
		}
		void Squared::paint() {
			cout << "\tSquared\t\ta= " << side << "\tS=" << area() << "\tP=" << perimetr() << endl;
		}
	
		Rectangel::	Rectangel() :sideA(1), sideB(1) {
			}
		Rectangel::Rectangel(double sideA, double sideB) :sideA(sideA), sideB(sideB) {
			}
		Rectangel::	~Rectangel() {
			}
			double Rectangel::area() {
				return sideA * sideB;
			}
			double Rectangel::perimetr() {
				return (2 * sideA) + (2 * sideB);
			}
			void Rectangel::paint() {
				cout << "\tRectangel\ta=" << sideA << " b=" << sideB << " S=" << area() << " P=" << perimetr() << endl;
			}
		