#include <iostream>
using namespace std;

int a = 90;

void myfun (){
    int b = 70;
    cout << "Accessing a from myfun(): " << a << endl;
    cout << "Value of B = " << b << endl;
}

int main (){
    cout << "Inside main(): " << a << endl;
    myfun();

    if(1==1){
        int d = 80;
        cout << "Inside if Block: " << a << endl;
    }

    while(1==1){
        cout << "Inside while Block: " << a << endl;
        break;
    }

    
    return 0;
}
