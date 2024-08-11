#include<iostream>
using namespace std;

//In this we will learn about default constructor.
//A constructor is a function having 
//SAME NAME as the class
//NO RETURN TYPE

class Student
{  
    
    private:
    char sem;

    public:
    int age;

    
    //DEFAULT CONSTRUCTOR
    Student() {
        cout<< "Constructor called" <<endl;
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
    cout<< "Hi" <<endl;
    Student s;
    cout<< "Hello" <<endl;

    //Dynamic allocation
    Student *stu = new Student;

    return 0;
}




