#include<iostream>
using namespace std;
class human
{

    public:
    int range(int r){
        return 3.14*r*r;
    }
    int range(int l,int b){
        return l*b;
    }
};
int main(){
    human a1,a2;
    cout<<a1.range(4)<<endl;
    cout<<a2.range(3,5);
}
