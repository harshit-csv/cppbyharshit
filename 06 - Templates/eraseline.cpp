#include <iostream>
#include <stdio.h>
using namespace std;

int main (){
    cout << "1st Line" << endl;
    cout << "2nd Line" << endl;
    cout << "3rd Line" << endl;

    cout << "\033[F\033[K";
    cout << "New 3rd Line" << endl;

    return 0;
}