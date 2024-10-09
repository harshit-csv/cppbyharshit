#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the function template with different types
    cout << "Max of 3 and 7: " << findMax(3, 7) << endl;
    cout << "Max of 5.6 and 3.2: " << findMax(5.6, 3.2) << endl;
    cout << "Max of 'a' and 'z': " << findMax('a', 'z') << endl;

    return 0;
}
