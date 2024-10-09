#include <iostream>
using namespace std;

class Home {
    private:
        int cash = 1000;
    public:
        void viewCash(){
            cout << "Cash = " << cash << endl;
        }
        friend void apnaDostRavi(Home);
};

void apnaDostRavi (Home h){
    cout << "Uske pass " << h.cash << " hai" << endl;
}

int main (){
    Home h1;
    h1.viewCash();
    apnaDostRavi(h1);
    h1.viewCash();
    return 0;
}