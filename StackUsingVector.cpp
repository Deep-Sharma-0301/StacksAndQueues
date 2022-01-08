#include<bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int> v;
    public:
    void push(int data)
    {
        if(v.size()<v.max_size())
        {
            v.push_back(data);
        }
        else
        {
            cout<<"Condition Overflowed";
        }
    }
    bool empty()
    {
        return v.size()==0;
    }
    int top()
    {
        return v[v.size()-1];
    }
    void pop()
    {
        if(!v.empty())
        {
            v.pop_back();
        }
        else
        {
            cout<<"Condition Overflowed";
        }
    }
};
int main()
{
    Stack s;
    for(int i=0;i<5;i++)
    {
        s.push(i*i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<s.empty();
    return 0;
}