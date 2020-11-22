#include <iostream>

int const size_d = 3;
using namespace std;

template <class T>
T sum(T *input, int size_d, T sum=0){
    for(int i=0; i<size_d; i++)
        sum += input[i];
    return sum;
}

int main(){
    cout << " Template for sum() "<< endl;
    int a[] = {1, 2, 3};
    double b[] = {2.1, 2.2, 2.3};
    cout << sum(a,3) << endl;
    cout << sum(b,3) << endl;

    return 0;
}
