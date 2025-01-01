#include<iostream>
using namespace std;


class human       // parent class
{

protected:

    string name;
    int age ;
    int roll_no;


    public:
   void intr(){
    cout<<"nameis "<<name<<endl;
   }

};

class boy :public human  //child class
{


    private :
    int internal_fees;
public :
void ind(){
    cout<<"hellowstudent"<<age;
}

};

class student :public boy   //  again class
{

private:
int fees;


public:


student(string name,int age,int roll_no)
{
  this->name=name;
  this->age=age;
    this->roll_no=roll_no;
    }

void diplay(){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
}


};
int main(){
    student a1("guf",70,100);
    //a1.diplay();
 //a1.ind();
 a1.intr();
}