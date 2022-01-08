#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    queue<char> q;
    int n=s.length();
    unordered_map<char,int> m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    char ans;
    for(int i=0;i<n;i++)
    {
        if(m.count(s[i]))
        {
            if(m[s[i]]==1)
            {
                ans=s[i];
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}