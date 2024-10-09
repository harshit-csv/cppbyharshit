#include <iostream>
using namespace std;

class Print{
    public:
        void operator << (string s){
            cout << "Good Morning, " << s << endl;
        }
};
int main (){

    Print pr;
    pr << "Harshit";
    pr << "Ravi";
    pr << "Shubham";
    pr << "Sarthak";

    return 0;
}