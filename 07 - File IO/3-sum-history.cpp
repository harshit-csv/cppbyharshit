#include <iostream>
#include <fstream>
using namespace std;

int main (){

    int n1, n2, res, ch;
    ofstream fout("history.txt");
    abc:
    cout << "Enter 1st num: ";
    cin >> n1;
    cout << "Enter 2nd num: ";
    cin >> n2;
    res = n1 + n2;

    cout << "Sum: " << n1 << " + " << n2 << " = " << res << endl;
    cout << "\nTo add more, press 1    To Stop, press 0\nChoice: " ;
    cin >> ch;
    cout << "\n==============================\n";
    
    fout << "😎 Sum: " << n1 << " + " << n2 << " = " << res << endl;

    if(ch) goto abc;
    
    fout.close();
    cout << "Thanks for using our calculator :)";
    return 0;
}