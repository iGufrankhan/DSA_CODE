#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;
    static int total_balance;
    static int  total_customer;



public:
customer(string name,int account_number,int balance){
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_balance+=balance;
    total_customer++;
}void deposit(int amount){
    balance+=amount;
    total_balance+=amount;
}
void withdraw(int amount){
if(amount>0&&amount<=balance){
    balance-=amount;
    total_balance-=amount;
}

}




static void ascetic(){
    cout<<total_customer<<endl;
    cout<<"total mone "<<total_balance<<endl;
}


void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<" ";
    cout<<total_customer<<endl;
}
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
    customer a1("gufran",3,100);
    a1.display();
    customer a2("gufranq",8,900);
    a2.display();
    customer a3("khan",5,200);
    a3.display();

    a2.withdraw(700);
customer::ascetic();

}