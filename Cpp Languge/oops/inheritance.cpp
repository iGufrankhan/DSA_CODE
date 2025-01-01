#include<iostream>
using namespace std;


class human
{

protected:

    string name;
    int age ;
    int roll_no;

};

class student :private human
{


int fees;
public:

 student(string a,int age,int roll_no,int fees
){
    name=a;
    this->age=age;
    this->roll_no=roll_no;
    this->fees=fees;

}

void diplay(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
}


};
int main(){
    student a1("rohit",46,240,100);
    
    a1.diplay();
}

