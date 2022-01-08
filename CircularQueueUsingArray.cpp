#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int *a;
    int f,r,c_size,max_size;
    public:
    Queue(int default_size=5)
    {
        f=0;
        r=default_size-1;
        c_size=0;
        max_size=default_size;
    }
    bool full()
    {
        return c_size==max_size;
    }
    void push(int d)
    {
        if(!full())
        {
            r=(r+1)%max_size;
            a[r]=d;
            c_size++;
        }
    }
    bool empty()
    {
        return c_size==0;
    }
    void pop()
    {
        if(!empty())
        {
            f=(f+1)%max_size;
            c_size--;
        }
    }
    int front()
    {
        return a[f];
    }
    int back()
    {
        return a[r];
    }
};


int main()
{
    Queue q(10);
    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}