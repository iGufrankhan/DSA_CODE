#include <iostream>
#include <vector>
using namespace std;

void print(string s, int index, int n,
           vector<string > &ans, string temp)
{
    if (index == n){
        ans.push_back(temp);
    return;}

    print(s, index + 1, n, ans, temp);


    temp.push_back(s[index]);
    print(s, index + 1, n, ans, temp);
    // temp.pop_back();
}
int main()
{
    string s = "abcd";

    vector<string> ans;
    string temp;


    print(s, 0, s.size(), ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
       
            cout << ans[i] <<endl;
     
    }
}