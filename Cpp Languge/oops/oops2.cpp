#include<iostream>
using namespace std;

class student
{
    private:
    string name ;
    int age,roll_no;
    string grade;

public :
void setname(string s){
    if(s.size()==0){
        cout<<"invalid";
        return ;
    }
    name=s;

}
void setage(int a){
    age=a;

}
void setrollno(int b){
    roll_no=b;

}
void setgrade(string m){
    grade=m;
}

void getname(){
    cout<<name<<endl;
}
void  getgrade(){

        cout<<grade<<endl;
    

}int getrollno(){
    return roll_no;

}int getage (){
    return age;
}



};
int main(){
    student s1;
    s1.setage(12);
    s1.setname("");
    s1.setrollno(121);
    s1.setgrade("a+");
s1.getname();
cout<<s1.getage();
cout<<s1.getrollno()<<endl;
s1.getgrade();


}