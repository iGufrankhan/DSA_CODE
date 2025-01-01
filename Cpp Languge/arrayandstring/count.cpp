#include<iostream>
using namespace std;
int main(){

int val=0;
int crval=0;
if(cin>>crval){
int count=1;
while(cin>>val){

if(val==crval)
count++;

else {

cout<< crval << "occurs" << count <<"times" <<endl;
val==crval;
count=1;} 

}
cout<< crval << "occur" << count << "times" <<endl;
}
return 0;
}




