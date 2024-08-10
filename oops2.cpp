#include<iostream>
using namespace std;


class Student
{  

    //Now if we do not have any properties
    //What will be the size of the object created??

    //EMPTY CLASS


};

int main()
{
    Student s;
     
    //Checking the size of the object 
    cout<< "Size is :" << sizeof(s) << endl;  
    return 0;
}

//For empty class, 1 Byte of memory is allocated to the object
//Just to keep track of the class