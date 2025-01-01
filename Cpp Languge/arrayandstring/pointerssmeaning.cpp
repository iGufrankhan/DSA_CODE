#include<iostream>
using namespace std;
int main(){
    char c='a';
    char *ptr=&c;
    cout<<(void*)ptr;//adress print 
    cout<<endl;
char name[5]="1244";
char *ptr1=name;
cout<<name;
cout<<ptr1;


cout<<endl;
int arr[5]={3,4,7,8,3};
int *pt=arr;
for(int i=0;i<5;i++){
    cout<<*(arr+i);
}

}