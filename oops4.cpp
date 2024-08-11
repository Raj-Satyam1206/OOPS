#include<iostream>
using namespace std;

//In this we will learn about Getter  &  Setter
//If the property is Private, then how will we access it in the main function?
//This is where getter and setter comes in use

//Get is used to fetch a value 
//Set is used to manipulate a value
class Student
{ 
    
    private:
    char sem;
 
    public:
    int age;

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


int main()
{

    Student s;

    //Objects can access the property through the DOT OPERATOR
    s.age = 20;
    s.setSem('A');
    
    cout<< "Age is :" << s.age << endl;
    cout<< "Sem is :" << s.getSem() << endl;    
    return 0;
}

