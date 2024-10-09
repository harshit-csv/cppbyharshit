#include <iostream>
using namespace std;

int main (){
    int myArray[5]; // Declaration

    for (int i = 0; i < 5; i++){
        cin >> myArray[i]; // Initialization
    }

    cout << myArray[0] << " ";
    cout << myArray[1] << " ";
    cout << myArray[2] << " ";
    cout << myArray[3] << " ";
    cout << myArray[4] << " ";

    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << myArray[i] << " ";
    }

    cout << endl << "Reverse array " << endl;

    cout << myArray[4] << " ";
    cout << myArray[3] << " ";
    cout << myArray[2] << " ";
    cout << myArray[1] << " ";
    cout << myArray[0] << " ";

    cout << endl; 
    
    for (int j = 4; j >= 0; j-- ){
        cout << myArray[j] << " ";
    }

  
    return 0;
}













  // for (int i = 5; i < 5; i++){
    //     cout <<  myArray[5-i] <<  " ";
    // }
