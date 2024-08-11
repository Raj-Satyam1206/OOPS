#include<iostream>
using namespace std;

//In this we will learn about Static and dynamic allocation of objects.

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
    //Static allocation
    Student s;
    s.age = 20;
    s.setSem('A');
    cout<< "Age is :" << s.age << endl;
    cout<< "Sem is :" << s.getSem() << endl;



    //Dynamic allocation
    //Here stu acts as a pointer
    //In heap memory , stu holds the address of the new object 
    Student *stu = new Student;

    //1st way
    (*stu).age = 20;
    (*stu).setSem('A');
    cout<< "Age is :" << (*stu).age << endl;
    cout<< "Sem is :" << (*stu).getSem() << endl;

    //2nd way
    stu->age = 20;
    stu->setSem('A');
    cout<< "Age is :" << stu->age << endl;
    cout<< "Sem is :" << stu->getSem() << endl;

    return 0;
}


//Node *node = new Node();
//Node *node = new Node; They both are the same things

