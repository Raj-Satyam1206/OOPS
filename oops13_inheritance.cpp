#include<iostream>
using namespace std;

// In this we will learn about INHERITANCE
// Inheriting the properties of the parent class into the child class


//PARENT CLASS
class Human
{  
    //DATA MEMBERS
    public:
    int height;
    int weight;
    int age;


    //MEMBER FUNCTIONS
    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};


//CHILD CLASS
//Inheriting the data members and member functions of parent class
class Male: public Human
{
    public:
    string colour;

    void sleep(){
        cout<< "Male Sleeping" <<endl;
    }
};



int main()
{
    Male m;
    cout << m.age <<endl;
    m.sleep();
    cout<<"Sab sahi chal rha hai" <<endl;  
    return 0;
}