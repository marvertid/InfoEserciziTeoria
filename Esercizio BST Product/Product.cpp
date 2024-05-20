#include "product.h"

int Product::code = 0;

Product::Product() {
	code++;
	quantity = 0;
	price = 0.0;
}
Product::Product(int quantity, float price) {
	code++;
	this->quantity = quantity;
	this->price = price;
}
int Product::getCode() {
	return code;
}
int Product::getQuantity() {
	return quantity;
}
float Product::getPrice() {
	return price;
}
void Product::setQuantity(int quantity) {
	this->quantity = quantity;
}
void Product::setPrice(float price) {
	this->price = price;
}
ostream& operator<<(ostream& out, const Product& p) {
	out << endl << "Code: " << p.code;
	out << endl << "Quantity: " << p.quantity;
	out << endl << "Price: " << p.price;
	
	return out;
}

istream& operator>>(istream& in, Product& p) {
	Product temp;
	cout << endl << "Product: ";
	cout << endl << "Quantity: ";
	in >> temp.quantity;
	cout << endl << "Price: ";
	in >> temp.price;
	p = temp;

	return in;
}