#include <iostream>
using namespace std;

class MyClass {
    int a = 0;
    public:
        void operator ++ (){
            a = a + 1;
        }
        void display(){
            cout << "A = " << a << endl;
        }
};

int main (){
    MyClass obj;
    obj.operator++();
    ++obj;
    obj.display();
    return 0;
}

/*

Unary operator
Binary operator

+
-
*
/
%
<
>
<=
>=
<<
>>
!=
==
=


*/