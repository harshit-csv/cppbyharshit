#include <iostream>
using namespace std;

int main (){

    int n;

    string name;
    cout << "Enter name: ";
    getline(cin,name);

    cout << "\nEnter 0 to Stop, 1 to add more \nChoice: ";
    cin >> n;

    if(n){
        system("cls");    
        system("clear.exe");    
    }

    return 0;
}