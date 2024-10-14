#include <iostream>
using namespace std;

int main (){
    int temp, sum = 0;

    inputAgain: 

    cin >> temp;
    sum = sum + temp;

    if (temp !=0){
        goto inputAgain;
    }

    cout << "Sum = " <<  sum;
    // Changes
    // More changes
    return 0;
}

/*

12
14
90
0
Sum = 126

*/