#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int * data;
    int capacity;
    int nextIdx;
    public:
    Stack(int capacity)     //if we used 2-D array then passing capacity was not required
    {
        data=new int(capacity);  //data=new int(4);//we can give any number of our choice if we use 2-d array
        nextIdx=0;//this newidx will help us to return the size of our stack
        this->capacity=capacity;//capacity=4;
    }
    int Getsize()
    {
        return nextIdx;
    }
    bool isEmpty()
    {
        return Getsize()==0;
    }
    void push(int d)
    {
        /*if it was 2-d array then the code will be->
        if(nextIdx==capacity)
        {
            capacity=2*capacity;
            int* newArray=new int(capacity);
            for(int i=0;i<capacity/2;i++)
            {
                newArray[i]=data[i];
            }
            delete [] data;
            data=newArray;
        }
        else
        {
            data[nextIdx]=d;
            nextIdx++;
        }
        */
        
        if(nextIdx==capacity)
        {
            cout<<"Overflow at index "<<nextIdx<<endl;
        }
        else
        {
            data[nextIdx]=d;
            nextIdx++;
        }
    }
    void pop()
    {
        if(nextIdx==0)
        {
            cout<<"underflow"<<endl;
        }
        else{
            nextIdx--;//here we did not delete the element we just moved our iteraotor back and when next push() command eecutes this value will be over written
        }
    }
    int top()
    {
        return data[nextIdx-1];
    }
};
int main()
{
  Stack s(5);
  s.push(1); 
  s.push(2); 
  s.push(3); 
  s.push(4); 
  s.push(5); 
  s.push(6);
  cout<<s.Getsize()<<endl;
  while(!s.isEmpty())
  {
      cout<<s.top()<<endl;
      s.pop();
  } 
  return 0;
}