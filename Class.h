#pragma once
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
class Circle :public Figure {
	double radius;
public:
	Circle();
	
	Circle(double radius);
	double get_radius();
	void set_radius(double radius);
	~Circle();
	double area();
	double perimetr();
	void paint();
};
class Triangle :public Figure {
	double sideA;
	double sideB;
	double sideC;
public:
	Triangle();
	Triangle(double sideA, double sideB, double sideC);
	~Triangle();
	double area();
	double perimetr();
	void paint();
};
class Squared :public Figure {
	double side;
public:
	Squared();
	Squared(double side);
	~Squared();
	double get_side();
	void set_side(double side);
	double area();
	double perimetr();
	void paint();
};
class Rectangel :public Figure {
	double sideA;
	double sideB;
public:
	Rectangel();
	Rectangel(double sideA, double sideB);
	~Rectangel();
	double area();
	double perimetr();
	void paint();
};