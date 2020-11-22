#include <iostream>

using namespace std;
const int N = 40;

inline void sum(int &p, int n, int* d) {
    for(int i = 0; i < n; ++i)
        p = p + d[i];
}

int main2(){
    int accum = 0;
    int* data = new int[N];

    for(int i = 0; i < N; ++i)
        data[i] = i;

    sum(accum, static_cast<int>(N), data);
    cout << "sum is " << accum << endl;

    return 0;
}
