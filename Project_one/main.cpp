#include "Car.h"

using namespace std;

int main()
{
    Car example1, example2;

    example1.set_colour("Czarny");
    example1(example2);
    cout << example1 << endl;


    cout << example2 << endl;


    return 0;
}
