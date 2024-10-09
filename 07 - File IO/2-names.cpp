#include <iostream>
#include <fstream>
using namespace std;

int main () {
    string name;
    cout << "Enter your name: ";
    getline(cin,name);

    ofstream ft("myname.txt");
    ft << name << endl;
      
}