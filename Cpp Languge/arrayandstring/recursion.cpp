#include<iostream>
using namespace std;

int evenno(int num){
 static int count=0;

if(num>0){
   count++;
evenno(num/10);

}
else {
    return count;
}


}
int main(){



    int num;
    cin>>num;
    
    cout<<evenno(num);
}