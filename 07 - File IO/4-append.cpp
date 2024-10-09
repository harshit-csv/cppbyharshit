#include <iostream>
#include <fstream>
using namespace std;

int main (){
    string name, line;
    int n = 1, count = 0;
    
    ifstream fin("namelist.txt");
    while(getline(fin,name)){
        cout << name << endl;
        count++;
    }
    cout << "\nTotal number of names in file is "<< count << " Now add more names :)\n\n";
    fin.close();
    
    ofstream ft("namelist.txt", ios::app);
    while(n){
        cout << "\n==========================================\n";
        cout << "Enter name: ";
        getline(cin,name);
        ft << count << ". " << name << endl;
        count++;
        cout << "To add more, Press 1, \tElse Press 0\nChoice: ";
        cin >> n;
    }
    cout << "\n============== Run program again to add more names. =================\n";
    
    return 0;
}