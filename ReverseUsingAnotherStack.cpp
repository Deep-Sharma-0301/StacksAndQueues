//in this algorithm we will follow 3 steps:-
//1) store the top element of s1. in some variable x and pop() the top most element
//2) transfer all the elements from s1 to s2
//3) now push x in s1 and again trasfer all the elements from s2 to s1
//REPEAT THIS PROCESS N TIMES WHERE N IS SIZE OF STACK1

#include<iostream>
#include<stack>
using namespace std;
void transfer(stack<int> &s1,stack<int> &s2,int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}
void reverse(stack<int> &s1)
{
    int n=s1.size();
    stack<int> s2;
    for(int i=0;i<n;i++)
    {
        int x=s1.top();
        s1.pop();
        transfer(s1,s2,n-i-1);
        s1.push(x);
        transfer(s2,s1,n-i-1);
    }
}
int main()
{
    stack<int> s1;
    for(int i=1;i<=5;i++)
    {
        s1.push(i);
    }
    reverse(s1);
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}