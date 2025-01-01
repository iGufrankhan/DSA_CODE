#include<iostream>
using namespace std;


class human
{

protected:

    string name;
    int age ;
    int roll_no;


    public:
    human(string name,int age){
        
        this->name=name;
        this->age=age;
    }

};

class student :private human
{

private:
int fees;
public:



 student(string name,int age,int roll_no,int fees
):human(name,age){
  
    this->roll_no=roll_no;
    this->fees=fees;}

void diplay(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
}


};
int main(){
    student a1("guf",79,70,100);
    a1.diplay();
 
}