#include<iostream>
using namespace std;

int main()
{
    int choose,ans,n;
    string q,o1,o2,o3,o4;
    int count=1,has=65;
    
    cout<<"======= objective question======="<<endl;
    abc:
    cout<<char(81)<<count<<" ."<<"Enter your  question:" <<endl;
    getline(cin,q);
    cout << "\033[F\033[K";
    cout<<"--- enter your option ---" << endl;
    cout<<"first option: ";
    getline(cin,o1);

    cout << "\033[F\033[K";
    cout<<"2nd option: ";
    getline(cin,o2);
    cout << "\033[F\033[K";
    cout<<"3rd option: ";
    getline(cin,o3);
    cout << "\033[F\033[K";
    cout<<"4th option: ";
    getline(cin,o4);
    cout << "\033[F\033[K";
    cout<<"enter the answer: ";
    cin>>ans;
    cout << "\033[F\033[K";
    system("cls");
    cout<<char(81)<<count<<" ."<<q<<endl;
    count++;
    cout<<char(has)<<" ."<<o1<<endl;
    has++;
    cout<<char(has)<<" ."<<o2<<endl;
    has++;
    cout<<char(has)<<" ."<<o3<<endl;
    has++;
    cout<<char(has)<<" ."<<o4<<endl;
    
    cout<<"enter your answer:"<<endl;
    cin>>choose;
    if(ans==choose)
    {
        cout<<"answer is right";
    }
    else
    {
        cout<<"answer is wrong";
    }
    cout<<endl;
    cout<<"for next question press 1"<<endl;
    cin>>n;
    if(n)
    goto abc;
    return 0;
}