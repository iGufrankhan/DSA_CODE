#include<iostream>
using namespace std;

class bank{
    string name;
    int balance;
    int amount_no;
    public:
    bank(string name,int balance,int amount_no){
        this->name=name;
        this->amount_no=amount_no;
        this->balance=balance;
    }


    void deposit(int amount){
        if(amount>0){
balance+=amount;
cout<<amount<<" rs creditted successfully\n";
        }else {
throw "amount should greater than 0";

        }

    }
    void withdraw(int amount){
        if(amount>0&&amount<balance){
            balance-=amount;
            cout<<amount<<"rs successfully debitted\n";
            cout<<balance<<"rs left in your account\n";
            cout<<"tank you\n";
        }else if(amount<0){
            throw runtime_error( "amount should be greater than 0");
        }else{
            throw " balance is sufficinet\n paisa nhi ha bhikhari";
          
        }
    }


};
int main(){
    bank c1("gufran",1000,89);
    try{
        c1.deposit(100);
        c1.withdraw(20);
        c1.deposit(100);

    }
    catch(const runtime_error &e){
        cout<<"exceptinal :"<<e.what()<<endl;
    }
    catch(...){
        cout<<"exectional occoeio";
    }
}