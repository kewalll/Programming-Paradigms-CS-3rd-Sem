#include<iostream>
#include<string.h>
struct data{
       int id;
       std::string name;
       float price;
       };
int main(){
    data a;
    data b;
    data c;
    std::cout<<"Enter id of first product : ";
    std::cin>>a.id;
    std::cout<<"Enter name of first product : ";
    std::cin>>a.name;
    std::cout<<"Enter price of first product : ";
    std::cin>>a.price;
    std::cout<<"Enter id of first product : ";
    std::cin>>b.id;
    std::cout<<"Enter name of first product : ";
    std::cin>>b.name;
    std::cout<<"Enter price of first product : ";
    std::cin>>b.price;
    std::cout<<"Enter id of first product : ";
    std::cin>>c.id;
    std::cout<<"Enter name of first product : ";
    std::cin>>c.name;
    std::cout<<"Enter price of first product : ";
    std::cin>>c.price;
    std::cout<<"\nList";
    std::cout<<"\nID : "<<a.id<<" Name : "<<a.name<<" Price : "<<a.price;
    std::cout<<"\nID : "<<b.id<<" Name : "<<b.name<<" Price : "<<b.price;
    std::cout<<"\nID : "<<c.id<<" Name : "<<c.name<<" Price : "<<c.price;
}