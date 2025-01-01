#include<iostream>
using namespace std;
class stud


{
    string name;
    int age;
    int *roll;




public:
stud(){
    name="4";
    cout<<name<<endl;

}

stud(string name){
    this->name=name;
    cout<<name<<endl;

    roll=new int ;
    cout<<"deletecons"<<endl;
}
 ~stud(){
    delete roll;
    cout<<"deleterecs constu "<<name<<endl;

}
};
int main(){

    stud a1("1"),a2("2"),a3("3");
    stud *a4=new stud;
    delete a4;

}
