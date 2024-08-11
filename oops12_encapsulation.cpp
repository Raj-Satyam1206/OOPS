#include<iostream>
using namespace std;

//In this we will learn about ENCAPSULATION
//Wrapping up of data members and members functions into a single entity
class Student
{  
    //DATA MEMBERS
    private:
    int age;
    char sem;

    //MEMBER FUNCTIONS
    public:
    int getAge(){
        return this->age;
    }
};

int main()
{
    Student s;
    cout<<"Sab sahi chal rha hai" <<endl;  
    return 0;
}

//Here the data is in read only mode
//there is no setter to set the data
//it is only readable