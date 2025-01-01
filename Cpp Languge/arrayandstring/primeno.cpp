#include<iostream>
using namespace std;
int main(){

for(int i=1;i<=100;i++){
   int factor=0;
    for(int j=1;j<=i;j++){

        if(i%j==0)
        factor++;
    }if(factor==2)printf("%d ",i);

}


return 0;

}