#include<iostream>
using namespace std;


class human
{

protected:

    string name;
    int age ;
    int roll_no;


    public:
    human(){

    }
    human(string name,int age){
        
        this->name=name;
        this->age=age;
    }
    void diplay(){
        cout<<name<<" "<<age<<endl;
    }

};

class student :public human
{

private:
int fees;


public:



 student(int age,string name,int roll_no,int fees
){
  this->name=name;
  this->age=age;
    this->roll_no=roll_no;
    this->fees=fees;}

void diplay(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
}


};
int main(){
    human a1("guf",79);
    a1.diplay();
    student a2(15,"guf",189,300);
 a2.diplay();
}