#include<iostream>
using namespace std;
class student
{public:
string name;
int age, roll_no;
string grade;

};
int main(){
    student s1;
    s1.name="gufran";
    s1.age=19;
s1.roll_no=89;
s1.grade="c";

cout<<s1.grade;


cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,"<<endl;

student s2;
s2.name="rohit";
s2.age=19;


cout<<s1.age<<endl<<s2.age;

}