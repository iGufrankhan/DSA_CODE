#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){



    string teams[]={"RCB","MI","CSK","RR","LSG","PBKS","DC","GT","KKR","SRH"};
    srand(time(0));
    int winnerindex=rand()%10;

cout<<endl;
cout<<endl;
    cout<<"the winner is :"<<teams[winnerindex]<<endl;
    cout<<endl;
    cout<<endl;
}