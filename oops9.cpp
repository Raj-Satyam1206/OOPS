#include<iostream>
using namespace std;

//In this we will learn about DESTRUCTOR.
//A destructor is a function having 
//SAME NAME as the class
//NO RETURN TYPE
//NO INPUT PARAMETERS


class Student
{  
    private:
    char sem;

    public:
    int age;


    //SIMPLE CONSTRUCTOR
    Student(){
        cout<< "Simple Constructor called" <<endl;
    }



    //PARAMETERISED CONSTRUCTOR
    Student(int age , char sem) {
        cout<<"Parameterised Constructor called" <<endl;
        this->age = age;
        this->sem = sem;
    }


    //COPY CONSTRUCTOR
    Student(Student& temp){
        cout<<"Copy Constructor called" <<endl;

        // Now the current object is 'stu'
        // THIS holds the address of the object 'stu'
        // We use the DOT operator
        this->age = temp.age;
        this->sem = temp.sem;
    }

    void print(){
        cout<< "Age is ->" << this->age << endl;
        cout<< "Sem is ->" << this->sem << endl;
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


    //DESTRUCTOR
    ~Student(){
        cout<< "Destructor called" <<endl;
    }

};


//As an object is created, a constructor is automatically invoked
int main()
{
    //Static allocation
    //A destructor is automatically invoked for a STATIC OBJECT
    Student a;

    //Dynamic allocation
    //A destructor is manually invoked for a DYNAMIC OBJECT
    Student *b = new Student();
    //manually destructor call
    delete b;


    return 0;
}


//NOTE :-
// When an object is created, a constructor is automatically called and memory is allocated for the data members
// Destructor - used to de-allocate memory
// When the object is is going out of its scope and about to be destroyed,then the memory allocated to the object needs to be  deallocated
// STATIC OBJECT - AUTOMATICALLY
// DYNAMIC OBJECT - MANUALLY

