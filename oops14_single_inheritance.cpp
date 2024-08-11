#include<iostream>
using namespace std;


//In this , we will learn about SINGLE INHERITANCE


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


//CHILD CLASS
class Dog : public Animal
{

};

int main()
{
    Dog d;
    d.speak();
    return 0;

}