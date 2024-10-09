#include <iostream>
using namespace std;

class MyClass {
    int a = 0;
    public:
        void add (){
            a = a + 1;
        }
        void display(){
            cout << "A = " << a << endl;
        }
};

int main (){
    MyClass obj;
    obj.add();
    obj.add();
    obj.display();
    obj.add();
    obj.add();
    obj.add();
    obj.add();
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