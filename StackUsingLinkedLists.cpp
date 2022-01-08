#include<bits/stdc++.h>
using namespace std;
// template <typename T>
class node
{
    public:
    int data;
    node * next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
class Stack
{
    node * head;
    int size;
    public:
    Stack()
    {
        head=NULL;
        size=0;
    }
    int Getsize()
    {
        return size;
    }
    bool empty()
    {
        return Getsize()==0;
    }
    void push(int d)
    {
        node* n=new node(d);
        n->next=head;
        head=n;
        size++;
    }
    void pop()
    {
        node* temp=head;
        if(!empty())
        {
            head=temp->next;
            size--;
            delete temp;
        }
        else
        {
            cout<<"Stack is Empty!";
        }
    }
    int top()
    {
        if(!empty())
        {
            return head->data;
        }
        else
        {
            cout<<"Stack is Empty!";
            return -1;
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.Getsize();
    return 0;
}