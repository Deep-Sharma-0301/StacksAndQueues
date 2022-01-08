//in this approach we cann not maintain a variable for min and max each because agar pop() ki command aa gyi then min max ke value change ho sakti hai 
//so we used three stacks in this- one for max_element, other for min_element and last for normal stack 

#include<bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int> v;
    vector<int> min_stack;
    vector<int> max_stack;
    public:
    int top()
    {
        return v[v.size()-1];
    }
    int GetMIN()
    {
        return min_stack[min_stack.size()-1];
    }
    int GetMax()
    {
        return max_stack[max_stack.size()-1];
    }
    void push(int d)
    {
        int current_min=d;
        int current_max=d;
        if(!min_stack.empty())
        {
            current_min=min(min_stack[min_stack.size()-1],current_min);
            current_max=max(max_stack[max_stack.size()-1],current_max);
        }
        max_stack.push_back(current_max);
        min_stack.push_back(current_min);
        v.push_back(d);
    }
    void pop()
    {
        v.pop_back();
        min_stack.pop_back();
        max_stack.pop_back();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(4);
    s.push(2);
    s.push(0);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.GetMax()<<" "<<s.GetMIN()<<endl;
    return 0;
}
