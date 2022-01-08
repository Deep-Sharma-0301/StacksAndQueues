#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    for(int i=1;i<=10;i++)
    {
        s.push(i);  //0(1)
    }
    for(int i=1;i<=10;i++)
    {
        cout<<s.top()<<endl; //0(1)
        s.pop(); //O(1)
    }
    cout<<s.empty();  //O(1)
    return 0;
}
