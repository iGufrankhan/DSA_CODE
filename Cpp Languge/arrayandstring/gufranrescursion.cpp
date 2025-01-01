#include<iostream>
#include<math.h>
using namespace std;

int reverse(int num){

    if(num!=0){

        return ((num%10)*pow(10,(int)log10(num))+reverse(num/10));


    }
    else {return 0;}
    

}
int main(){

    int num;
    cin>>num;
    cout<<reverse(num);
}