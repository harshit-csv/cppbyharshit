#include <iostream>
using namespace std;

void sum(int a, int b){
    cout << "Sum = " << a + b << endl;
}

int add(int a, int b){
    return a + b;
}

float addition(float a, float b){
    return a + b;
}

bool isEven(int a){
    if(a%2 == 0){
        return true;
    }
    return false;
}

char ansi(int a){
    int ch = a;
    return ch;
}

int main (){
   
    sum(23,78);

    int result = add(3,7);
    cout << "Result = " << result << endl;

    cout << "Result = " << add(20,30) << endl;

    cout << addition(1.4,7.2) << endl;

    cout << isEven(12) << endl;
    cout << isEven(13) << endl;

    cout << ansi(65) << endl;
    cout << ansi(97) << endl;
    cout << ansi(103) << endl;

    return 0;
}