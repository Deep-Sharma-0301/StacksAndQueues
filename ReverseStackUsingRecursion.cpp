// in this approch we are not going to use extra stack because or recursive function itself have call stack so we will use it
// we are going to follow steps written below:-
// 1) Store the s.top() in a variable x and pop() that from stack and then call recursion on the new smaller stack
// 2) when our stack becomes empty we will return it and we will call insertAtBottom function assuming that our recursion gave us reversed small stack
// 3) in insert function we will insert the x at bottom for dry run check notes



#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int x)
{
    if(s.size()==0)
    {
        s.push(x);
        return ;
    }
    int y=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(y);
}
void reverse(stack<int> &s){
    if(s.size()==0)
    {
        return ;
    }
    int x=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,x);
}
int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}