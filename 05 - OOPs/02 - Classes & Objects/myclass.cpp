#include <iostream>
using namespace std;

class Student {

    private:
        int roll;
        string name;

    public:
        Student(int r, string n){
            roll = r;
            name = n;
        }
        void showData(){
            string msg = "'s roll number is ";
            cout << name << msg << roll << endl;
        }
};

int main (){

    Student s1(1,"Satyam");
    Student s2(2,"Rishank");
    Student s3(3,"Keshav");

    s1.showData();
    s2.showData();
    s3.showData();

    return 0;
}
