#include<iostream>
using namespace std;


//In this , we will learn about MULTI-LEVEL INHERITANCE


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

class Labrador : public Dog
{

};


int main()
{
    Labrador l;
    l.speak();
    return 0;

}