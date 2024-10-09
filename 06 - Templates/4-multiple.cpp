#include <iostream>
using namespace std;

template <typename T>
void print (T a, int n){
    for (int i = 0; i < n; i++){
        cout << a << endl;
    }
}

int main (){
    print("Harshit",4);
    print(true,3);
    print('@',2);
    print(556,4);
    return 0;
}