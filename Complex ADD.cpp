#include<iostream>

struct complex{
       float real;
       float imag;
       };
int main(){
    complex a;
    complex b;
    complex ans;
    std::cout<<"Enter real part of first number : ";
    std::cin>>a.real;
    std::cout<<"Enter imag part of first number : ";
    std::cin>>a.imag;
    std::cout<<"Enter real part of second number : ";
    std::cin>>b.real;
    std::cout<<"Enter imag part of second number : ";
    std::cin>>b.imag;
    ans.real=a.real+b.real;
    ans.imag=a.imag+b.imag;
    std::cout<<"Answer : "<<ans.real<<" + "<<ans.imag<<"i";
}