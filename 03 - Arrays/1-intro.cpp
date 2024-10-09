#include <iostream>
using namespace std;

int main (){

    // Declaraation + Initialization
    int a  = 90;

    // Declaraation + Initialization
    int arr[] = {9, 8, 0, 1, 9, 0, 7, 0, 9, 4}; 
    
    // Number of elements = 10      (n)
    // Index of last element = 9    (n-1)

    // cout << arr[0];
    // cout << arr[1];
    // cout << arr[2];
    // cout << arr[3];
    // cout << arr[4];
    // cout << arr[5];
    // cout << arr[6];
    // cout << arr[7];
    // cout << arr[8];
    // cout << arr[9];

    int n = sizeof(arr) / sizeof(int); // 40 / 4 = 10
    for (int i = 0; i < n; i++){
        cout << arr[i];
    }

    // Declaraation
    // Initialization 
    // Traversal
    return 0;
}