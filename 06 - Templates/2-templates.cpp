#include <iostream>
using namespace std;

template <typename T>
T sum (T a, T b){
    return a + b;
}

int main (){
    cout << sum(1,2) << endl;
    cout << sum(1.1,2.1) << endl;
    cout << sum('1','2') << endl;
    cout << sum(true,false) << endl;
    return 0;
}