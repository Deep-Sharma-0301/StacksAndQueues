#include<bits/stdc++.h>
using namespace std;
bool isValid(char *ch)
{
    stack<char> s;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='(')//agar opening bracket hua then we will just push it in our stackk
        {
            s.push('(');
        }
        else if(ch[i]==')')//agar closing bracket hua toh uskko hume pair karna hai '(' ke sath uske liye humare stack ke top pe '(' hone chie aur ye tabhi hoga agar stack empty nahi hoga 
        {
            if(s.empty() or s.top()!='(')//agar stack empty hai ye fir stack ke top pe opening bracket nahi hai iska matlab ki hum cloaing bracket ko pair up karke renmove nahi kar paenge so we will just return false;
            {
                return false;
                
            }
            s.pop();//this means that we have paired up opening and closing brackets () and now we just remove them fom stack
        }
    }
    if(s.empty()) //after the loop ends if the brackets were valid then there should be nothing in the stack after pairing and popping of brackets
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char ch[1000];
    cin>>ch;
    cout<<isValid(ch);
    return 0;
}