#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main()
{
    queue<char> q;
    unordered_map<char,int> m;
    char ch;
    cin>>ch;
    while(ch!='.')
    {
        q.push(ch);
        m[ch]++;
        while(!q.empty())
        {
            if(m[q.front()]==1)
            {
                cout<<q.front()<<" ";
                break;
            }
            else
            {
                q.pop();
            }
        }
        if(q.empty())
        {
            cout<<" -1";
        }
    cin>>ch;
    }
    return 0;
}