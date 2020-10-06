#pragma once
#include <iostream>
#include <string>

using namespace std;

class Flower
{
private:
	std::string name;
	int petals;
	double price;

public:

	//Q2
	Flower() : name("default"), petals(6), price(0) {};
	Flower(std::string name, int petals, double price);

	std::string getName() const { return this->name; }
	int getPetals() const { return this->petals; }
	double getPrice() const;

	//Q5
	void operator++() { //pre-increment
		this->petals++;
	}

	void operator++(int) { //post-increment
		this->petals++;
	}

	//remember that pre and post increment can also return a value, if we want!
	//int operator++() { //pre-increment
	//	this->petals++;
	//	return this->petals;
	//}

	//Q3
	//operators: +, ++, <<, >>, ==, !=
	//cout << f1 << f2 << f3 << f4;
	friend ostream& operator<<(ostream& os, const Flower& f);

};


