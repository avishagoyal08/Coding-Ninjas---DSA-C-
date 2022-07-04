#include<iostream>
using namespace std;

class queuesusingarray
{
    int *data;
    int size;
    int firstindex;
    int nextindex;
    int capacity;
    public:
    queuesusingarray(int s)//s is the size of complete array
    {
        data=new int[s];
        size=0;
        firstindex=-1;
        nextindex=0;
        capacity=s;
    }
    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        if(size==0)
        return true;
        else
        return false;
    }
    void enqueue(int element)
    {
        if(size==capacity)//agar queue full hai to
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextindex]=element;
        //nextindex++; - ye nhi kar sakte..hame array to size k baad vapas 0 se start karna hai
        nextindex = (nextindex+1) % capacity ;
        if(firstindex==-1)
        {
            firstindex=0;
        }
        size++;
    }

    int front()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstindex];

    }

    int dequeue()
    {
        //top element return karna hai...par pehle check karna pdega ki queue empty to nhi hai
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int ans = data[firstindex];
        firstindex= (firstindex+1) % capacity ;
        size--;
        return ans;
    }

};

int main()
{
    queuesusingarray q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Size is "<<q.getsize()<<endl;
    cout<<"Top element "<<q.front()<<endl;
    q.enqueue(60);
    cout<<"Dequeue - "<<q.dequeue()<<endl;
    cout<<"Size is "<<q.getsize()<<endl;


}