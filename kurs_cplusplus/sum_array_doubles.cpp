#include <iostream>

int const size_d = 4;
using namespace std;

double sum_doubles(double *input, int size_d){
    double sum = 0.0;
    for(int i=0; i<size_d; i++)
        sum += input[i];

    return sum;
}

int main5(){
    double input[size_d] = {1.2, 2.4, 3.6, 4.66};
    cout << "The sum : " << sum_doubles(input, size_d) << endl;

    return 0;
}
