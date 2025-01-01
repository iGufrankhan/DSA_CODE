#include<iostream>
using namespace std;
class student
{public:
string name;
int age, roll_no;
string grade;

};
int main(){


    student *s=new student;
    (*s).name="rohit";
     (*s).age=15;
 (*s).grade="a";
cout<<s->name<<s->age; 
}