#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    fin.open("zoom.text");
    char c;
   c=fin.get();
   while(!fin.eof()){ 
    cout<<c;
    c=fin.get();
   };
   fin.close();

}