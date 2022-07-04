#include<iostream>
#include<climits>
using namespace std;

class StackUsingArrays
{
    int *data;
    int index;
    int capacity;
    public:
    StackUsingArrays(int size)
    {
        data=new int[size];
        index=0;
        capacity=size;

    }
    int size(){
    return index;
    }

    bool isEmpty()
    {
        if(index==0)
        return true;
        else
        return false;

    }
    void push(int element)
    {
        if(capacity==index)
        {
            cout<<"Stack full"<<endl;
            return ;
        }
        data[index]=element;
        index++;
    }
    int pop()
    {
        if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return INT_MIN ;

    }
    index--;
    return(data[index]);
    
    }
    int top()
    {
        if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
        return INT_MIN ;

    }
    return(data[index-1]);
    
    }

};

int main()
{
    StackUsingArrays a(5);
    a.push(10);
    a.push(20);
    a.push(30);
    cout<<"size is "<<a.size()<<endl;
    cout<<"top element "<<a.top()<<endl;
    a.pop();
    a.pop();
    cout<<"size is "<<a.size()<<endl;
    cout<<"I s empty or not "<<a.isEmpty()<<endl;

}