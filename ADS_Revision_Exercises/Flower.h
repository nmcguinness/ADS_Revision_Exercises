#pragma once
#include <iostream>
#include <string>

using namespace std;

/// @brief Defines a Flower class and demonstrates operator overriding
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

	/// @brief Pre-increment operator
	void operator++() { //pre-increment
		this->petals++;
	}

	/// @brief Post-increment operator - note the use of a dummy (int) to distinguish between pre- and post-increment
	/// @param Integer value which is never used  
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
	//float neewPrice = f1 + 1.50

	/// @brief Overloads the + operator for Flower to increase price by adding a double value
	/// @param price Double added to Flower price
	/// @return New price of the Flower
	double operator+(double price) {
		this->price += price;
		return this->price;
	}

	/// @brief Overloads the + operator for Flower to increase price by adding an integer value
	/// @param price Integer added to Flower price
	/// @return New price of the Flower
	double operator+(int price) {
		this->price += price;
		return this->price;
	}

	/// @brief Equality operator which compares by price, petals and name
	/// @param other Constaant reference to the Flower object on the RHS of the operator
	/// @return True if equal, otherwise false
	bool operator==(const Flower& other) {
		return this->price == other.getPrice()
			&& this->petals == other.getPetals()
			&& this->name == other.getName();
	}

	/// @brief Not-equal-to operator which compares by price, petals and name
	/// @param other Constaant reference to the Flower object on the RHS of the operator
	/// @return True if not equal, otherwise false
	bool operator!=(const Flower& other) {
		return !(*this == other);
	}

	/// @brief Overrides the insertion stream operator for Flower class
	/// @param os Reference to an output stream (e.g. keyboard, file, network socket)
	/// @param f Const reference to a Flower object
	/// @return Handle to the output stream
	friend ostream& operator<<(ostream& os, const Flower& f);

};


