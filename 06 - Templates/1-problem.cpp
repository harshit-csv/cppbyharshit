#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

char sum(char a, char b){
    return a + b;
}

int main (){
    cout << sum(1,2) << endl;
    cout << sum(1.1,2.1) << endl;
    cout << sum('1','2') << endl; // 49 + 50 = 99
}
