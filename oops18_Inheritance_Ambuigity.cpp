#include<iostream>
using namespace std;


//In this , we will learn about INHERITANCE AMBIGUITY and SCOPE RESOLUTION operator

//If two classes are having the same function name 
//then the object of the inherited class will access which function

class A
{
    public:
    void func(){
        cout<< "Inside A" <<endl;
    }
};


class B
{
    public:
    void func(){
        cout<< "Inside B" <<endl;
    }
};


class C : public A , public B
{
    
};

//Use the class name along with the scope resolution operator to remove ambiguity 
int main()
{
    C obj;
    obj. A :: func();
    obj. B :: func();

}