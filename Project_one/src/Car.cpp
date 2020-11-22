#include "Car.h"

Car::Car()
{
    //ctor
    cout << "Narodziny!!" << endl;
}

Car::~Car()
{
    //dtor
    cout << "Smierc klassom!!" << endl;
}

Car::Car(Car& other)
{
    //copy ctor
    other.colour.assign("Etan");
}

Car& Car::operator=(const Car& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

ostream& operator<< ( ostream& os, const Car& c ) {
   os << c.colour;

   return os;
}

string Car::get_colour()
{
    return colour;
}

void Car::set_colour(string colour_in)
{
    colour.assign(colour_in);
}
