#include<iostream>
using namespace std;


//In this , we will learn about MULTIPLE INHERITANCE


//PARENT CLASS
class Animal
{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<< "Speaking" <<endl;
    }
};


class Human
{
    public:
    string color;

    public:
    void bark(){
        cout<< "Barking" <<endl;
    }
};


//Inheriting both classes ANIMAL and HUMAN
class Hybrid : public Animal , public Human
{

};

int main()
{
    Hybrid h;
    h.speak();
    h.bark();
    return 0;

}