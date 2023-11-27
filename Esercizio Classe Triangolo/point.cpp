#include <iostream>
#include <cmath> //inclusione della libreria matematica

#include "point.h" //inclusione della definizione della classe point

using namespace std;

//Costruttore di default
Point::Point(){
	coordX = 0;
	coordY = 0;
}

//Costruttore con parametri
Point::Point(double x, double y){
	coordX = x;
	coordY = y;
}

//Distruttore
Point::~Point(){
}

double Point::getCoordX(){
	return coordX;
}

void Point::setCoordX(double x){
	coordX = x;
}

double Point::getCoordY(){
	return coordY;
}

void Point::setCoordY(double y){
	coordY = y;
}

void Point::setCoords(double x, double y){
	coordX = x;
	coordY = y;
}

void Point::read(){
	cout << "Inserire ascissa (X): ";
	cin >> coordX;
	cout << "Inserire ordinata (Y): ";
	cin >> coordY;
}

void Point::print(){
	cout.precision(3);
	cout.setf(ios::fixed);
	cout << "(" << coordX << "; " << coordY << ")";
}

Point Point::midPoint(Point p){
	Point mid;
	mid.coordX = (coordX + p.getCoordX()) / 2;
	mid.coordY = (coordY + p.getCoordY()) / 2;
	return mid;
}

double Point::distance(Point p){
	double dist = sqrt(pow(p.coordX - coordX, 2) + pow(p.coordY - coordY, 2));
	return dist;
}

//Implementazione delle funzioni friend
bool isSymmetricalY(Point p1, Point p2){
	bool s = false;
	if (p1.coordX == (-1) * p2.coordX && p1.coordY == p2.coordY)
	s = true;
	return s;
}


