
#include <iostream>
 #include<vector>
  using namespace std;
int main() {

string str="ababc";
//cout<<str;
string temp,ans;
for(int i=0;i<str.size();i++)
{
    for(int j=i;j<str.size();j++)
    {
        temp.clear();
        for(int k=i;k<=j;k++)
        {
           temp+=str[k];
        }
        bool hasRepeating = false;
        if(ans.size()<temp.size())
        { 
            vector<int>record(26,0);
            for(int s=0;s<26;s++)
            {
                record[temp[s]-'a']++;
            }
            for(int s=0;s<26;s++)
            {
                if(record[s]>1)
                {
                    hasRepeating=true;
                    break;
                }
            }
            if(!hasRepeating)
            {
                ans=temp;
            }   
        }
    }
}
cout<<"Maximum Length is : "<<ans.size() ;
cout<<"and answer string is : "<<ans;
    return 0;
}