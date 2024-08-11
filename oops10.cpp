#include<iostream>
using namespace std;

//In this we will learn about STATIC KEYWORD.
//A static data member belongs to the class
//There is no need of an object to acces these data members 


class Student
{  
    private:
    char sem;

    public:
    int age;

    //STATIC DATA MEMBER
    static int timetoCompute;


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

};


//INITIALISE the static data member
int Student :: timetoCompute = 5;
 

int main()
{
    // Static data member belongs to the class
    // So it can be directly accessed by using the class name
    cout<< Student::timetoCompute <<endl;



    //Not recommended
    Student st;
    cout<< st.timetoCompute <<endl;

    Student st1;
    st1.timetoCompute = 10;
    cout<< st1.timetoCompute <<endl;
    cout<< st.timetoCompute <<endl;
    return 0;
}


