#include<iostream>
#include<vector>
using namespace std;
class animal{

public:
    virtual void speak(){
        cout<<"hello\n";
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"bark\n";
    }
};
class cat:public animal{
    public:
    void spaek(){
        cout<<"meow\n";
}
};


int main(){
   animal *p;

  vector<animal*>animals;
  animals.push_back(new dog());
  animals.push_back(new animal());
animals.push_back(new cat());
animals.push_back(new dog());
animals.push_back(new cat());

for(int i=0;i<animals.size();i++){
    p=animals[i];
p->speak();
}
}