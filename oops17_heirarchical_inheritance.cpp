#include<iostream>
using namespace std;


//In this , we will learn about HIERARCHICAL INHERITANCE

class Animal
{
    public:
    void func1(){
        cout<< "Inside function Animal" <<endl;
    }
};


class Dog : public Animal
{
    public:
    void func2(){
        cout<< "Inside function Dog" <<endl;
    }
};


class Cat : public Animal
{
    public:
    void func3(){
        cout<< "Inside function Cat" <<endl;
    }
};


int main()
{
    Dog d;
    d.func1();
    d.func2();

    Cat c;
    c.func1();
    c.func3();
}