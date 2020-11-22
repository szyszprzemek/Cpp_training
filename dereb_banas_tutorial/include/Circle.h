#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle: public Shape
{
    public:
        Circle();
        Circle(double width);
        virtual ~Circle();
        double Area();
};

#endif // CIRCLE_H
