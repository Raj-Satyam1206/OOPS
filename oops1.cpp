#include<iostream>
using namespace std;

//Class is user defined datatype
//It is a blueprint for the objects to be created
class Student
{  
    //properties
    //Data Members
    int age;
    char sem;
};

int main()
{
    //Creation of object
    //As an object is created for the class, a memory is created for all the properties in the class

    Student s;
     
    //Checking the size of the object 
    cout<< "Size is :" << sizeof(s) << endl;  
    return 0;
}



//Here the size comes as 8, instead of 5
//due to padding feature
//Study