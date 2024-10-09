#include <iostream>
using namespace std;

// Function template with two template parameters
template <typename T1, typename T2>
void add(T1 a, T2 b){
    cout << "Result = " << a + b << endl;
}

int main() {
    
    add(1,'1');
    add(1,5.6);
    add(true,5.6);
    add('a','\0');

    return 0;
}

