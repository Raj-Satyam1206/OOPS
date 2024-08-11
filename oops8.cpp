#include<iostream>
using namespace std;

//In this we will learn about COPY constructor.
//A constructor is a function having 
//SAME NAME as the class
//NO RETURN TYPE

class Student
{  

    //First the PRIVATE data members need to be declared

    private:
    char sem;

    public:
    int age;
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
};


//As an object is created, a constructor is automatically invoked
int main()
{
    //Static allocation
    Student s( 20 , 'C');
    s.print();
    

    //Copy Constructor is invoked
    //Copies the contents of object 's' into 'stu'
    Student stu(s);
    stu.print();

    return 0;
}

//NOTE :-(IMPORTANT)

//Line no. 28
// When the object 's' is passed , it is PASS BY VALUE
// In pass by value , a copy is created for the object 's'
// So we are copying the content of object 's' into object 'temp'
// When student temp is created , it is again invoking the copy constructor
// The copy constructor will again declare object 'temp'
// This cycle continues, leading to an infinite cycle


//Therefore, use PASS BY REFERENCE
