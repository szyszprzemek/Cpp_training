#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

using namespace std;

class Car
{
    string colour;


    public:
        Car();
        virtual ~Car();
        Car(Car& other);
        Car& operator=(const Car& other);
        friend ostream& operator<< ( ostream& os, const Car& c );
        string get_colour();
        void set_colour(string colour_in);

    protected:

    private:
};

#endif // CAR_H
