#include<iostream>
using namespace std;


class human
{

public:

    human(){
cout<<"gifran123"<<endl;
    }

protected:

    string name;
    int age ;
    int roll_no;


   
    void humans(){
        cout<<"i an mera"<<endl;


        
       
    }

};

class student 
{

private:
int fees;

public:
student (){
    cout<<"classs1234"<<endl;
}
public:
string character;
int roller;


};

class vijay:public human,public student  //sabse pahle parent ka constructor call hoga 
//jo decide pahle huma le rhe ha ya student se hoga jo aphle ayega wo pahle call hoga 
{

    private:
    int game;
    public:

vijay(){
    cout<<"246464"<<endl;
}


    vijay(string name,int age ,string character,int game){
        this->name=name;
        this->age=age;
        this->character=character;
        this->game=game;

    }void komalnawneet(){
        cout<<name<<" "<<age<<" "<<character<<" "<<game<<" "<<endl;

    }

};



int main(){
   // vijay a1("gufran",100,"loser",5786);
    //a1.komalnawneet();
  vijay a1;
  vijay a2("gufran",678,"loser",4658);
  a2.komalnawneet();
 
}