#include<bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> s1;
    stack<int> s2;
    int c_size;
    public:
    Queue()
    {
        c_size=0;
    }
    void insert(int d)// Insert operation is O(N)
    {
        if(!s1.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(d);
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
            c_size++;
        }
        else
        {
            c_size++;
            s1.push(d);
        }
    }
    bool isempty()
    {
        return c_size==0;
    }
    void pop() //pop operation is O(1)
    {
        if(!s1.empty())
        {
            s1.pop();
            c_size--;
        }
        else{
            return ;
        }
    }
    int GetSize()
    {
        return c_size;
    }
    int front()//FRONT OPERATION IS O(1)
    {
        return s1.top();
    }
};
int main()
{
    Queue q;
    for(int i=0;i<10;i++)
    {
        q.insert(i);
    }
    cout<<q.GetSize()<<endl;
    while(!q.isempty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<q.GetSize()<<endl;
    return 0;
}
