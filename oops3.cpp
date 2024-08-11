#include<iostream>
using namespace std;

//In this we will learn about access modifiers
//Public
//Private 
//Protected
//if Public, the properties can be accessed from ANYWHERE in the program
//If Private, the properties can be accessed only WITHIN the class
//BY default, if not specified, It is Private

class Student
{  
    public:
    int age;
    char sem;
};


int main()
{

    Student s;

    //Objects can access the data members through the DOT OPERATOR
    s.age = 20;
    s.sem = 'A';
    
    cout<< "Age is :" << s.age << endl;
    cout<< "Age is :" << s.sem << endl;    
    return 0;
}
