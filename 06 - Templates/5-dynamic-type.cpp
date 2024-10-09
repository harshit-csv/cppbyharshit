#include <iostream>
using namespace std;

// Function template with two template parameters
template <typename T1, typename T2>
auto add(T1 a, T2 b) {
    return a + b;
}

int main() {
    cout << "Sum of 5 and 3.2: " << add(5, 3.2) << endl;   // int and double
    cout << "Sum of 2.3 and 4.5: " << add(2.3, 4.5) << endl; // double and double
    cout << "Sum of 10 and 20: " << add(10, 20) << endl;   // int and int
    return 0;
}
