#include "Flower.h"

Flower::Flower(std::string name, int petals, double price)
{
   // (*this).name = name;
    this->name = name;
    this->petals = petals < 0 ? 6 : petals; //ternary (3 operands)
    this->price = price > 0 ? price : 0;
}

double Flower::getPrice() const
{
    return this->price;
}

ostream& operator<<(ostream& os, const Flower& f)
{
    os << f.name << "," << f.petals << "," << f.price;
    return os;
}
