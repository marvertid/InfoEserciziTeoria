#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {
	private:
		int static code;
		int quantity;
		float price;
	public:
		Product();
		Product(int quantity, float price);
		int getCode();
		int getQuantity();
		float getPrice();
		void setQuantity(int quantity);
		void setPrice(float price);
	friend ostream& operator<<(ostream& out, const Product& p);
	friend istream& operator>>(istream& in, Product& p);
};

#endif
