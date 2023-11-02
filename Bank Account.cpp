#include<iostream>
using namespace std;
class account
{
    int accno;
    char name[100];
    float bal;
    public:
        void read();
        void print_details() const;
        void deposit(float amt);
};
void account::read()
{
    cout<<"Enter account no : ";
    cin>>accno;
    cout<<"\nEnter name : ";
    cin>>name;
    cout<<"\ninput balance : ";
    cin>>bal;
}
void account::deposit(float amt)
{
    bal=bal+amt;
}
void account::print_details() const
{
    cout<<"\naccount no : "<<accno;
    cout<<"\nname : "<<name;
    cout<<"\nBalance : "<<bal;
}
int main()
{
    account acc1;
    acc1.read();
    acc1.deposit(5000);
    acc1.print_details();
}