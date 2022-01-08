#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
class Queue
{
    node * f;
    node * r;
    int c_size;
    public:
    Queue()
    {
        c_size=0;
        f=r=NULL;
    }
    bool empty()
    {
        return f==NULL;
    }
    void push(int d)
    {
        node * n=new node(d);
        if(empty())
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
        c_size++;
    }
    int size()
    {
        return c_size;
    }
    int front()
    {
        return f->data;
    }
    void pop()
    {
        node * temp=f;
        if(empty())
        {
            return ;
        }
        else{
            f=f->next;
            c_size--;
        }
        delete temp;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<q.size()<<endl;
    return 0;
}