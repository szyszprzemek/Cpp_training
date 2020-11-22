#include "Circle.h"
#include <cmath>

Circle::Circle(double width): Shape(width)
{
    //ctor
}

Circle::~Circle() = default;

double Circle::Area(){
    return 3.14 * pow((width / 2), 2);
}
