#include<iostream>
using namespace std;
int main(){


    int n; 
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
int anewale=0,tar=0;
for(int i=0;i<n;i++){
    if(anewale==0){
    tar=ar[i];
    anewale=1;}
else {
    if(ar[i]==tar)
    anewale++;
    else anewale--;
}


}
int count=0;

for(int i=0;i<n;i++){
    if(ar[i]==tar)
    count++;

}
if(count>n/2)
cout<<tar;


return 0;
}