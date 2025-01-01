#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream guf;
    guf.open("zoom.text");//file open ya file nhi ha to create karega .
    guf<<"hello gufran khan";//write kar diya ha
    
guf.close();

}