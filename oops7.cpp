#include<iostream>
using namespace std;

//In this we will learn about PARAMETERISED constructor.
//A constructor is a function having 
//SAME NAME as the class
//NO RETURN TYPE

class Student
{   
   
    private:
    char sem;
    
    public:
    int age;

    Student(){
        cout<< "Simple Constructor called" <<endl;
    }

    //PARAMETERISED CONSTRUCTOR
    Student(int age , char sem) {
        cout<< "this->" << this << endl;
        this->age = age;
        this->sem = sem;
    }

    int getAge(){
        return age;
    }

    char getSem(){
        return sem;
    }

    void setAge(int a){
        age = a;
    }

    void setSem(char st){
        sem = st;
    }
};


//As an object is created, a constructor is automatically invoked
int main()
{
    //Static allocation
    Student s( 20 , 'A');
    cout<< "Address of s :" << &s <<endl;

    //Dynamic allocation
    Student *stu = new Student(21 , 'C');

    return 0;
}

//NOTE :-(IMPORTANT)
//1.
//This keyword stores the address of the current object
//Hence THIS is a pointer which points to the current object
//here , this stores the address of the object s;

//2.
//When we form a parameterised constructor or a copy constructor
//the default constructor gets destroyted and will hvae to be written manually
//Only that specific constructor will be in function


