#include<iostream>
using namespace std;

class stud
{
    string name ;
    int age;
    int roll;


public:
 
stud(){
    name="kabir";
    age=17;
    roll=100;
}
//parameterised constructor
/*stud(string a,int b ,int c){
    name=a;
    age=b;
    roll=c;

}*/
stud(string d,int j){
    name=d;
    age=j;

}
/*stud(string name,int age,int roll){
    this-> name=name;
    this->age=age;
    this->roll=roll;
}*/
//inline construcotr;
stud(string n,int s,int x):name(n),age(s),roll(x){

}

//copy cons
stud( stud &d){
    name=d.name;
    age=d.age;
    roll=d.roll;




}
void display(){
    cout<<name<<" "<<age<<" "<<roll<<endl;
}
};
int main(){
    
    stud al("rohit",12,15);
    stud a2("gufran",16);
    al.display();
   a2.display();
   stud a4(al);
   a4.display();

}