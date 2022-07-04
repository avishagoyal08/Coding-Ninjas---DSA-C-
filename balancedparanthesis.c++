#include <iostream>
#include <string>
using namespace std;

#include<stack>

bool isBalanced(string ex) 
{
    // Write your code here
    stack<char> s;
    int l = ex.length();
    int i,count=0;
    for(i=0;i<l;i++)
    {
        if(ex[i]=='(' || ex[i]=='{' || ex[i]=='['){
            s.push(ex[i]);
            count=1;
        }
        if(!s.empty()){
       if(ex[i]==')')
        {
            if(s.top()=='(')
            {
                s.pop();
                continue;
            }
            else
            {
                break;
            }
        }
            
            if(ex[i]=='}')
        {
            if(s.top()=='{')
            {
                s.pop();
                continue;
            }
            else
            {
                break;
            }
        }
            
            if(ex[i]==']')
        {
            if(s.top()=='[')
            {
                s.pop();
                continue;
            }
            else
            {
                break;
            }
        }
        }
    }
    if(s.empty() && count==1)
        return true;
    else
        return false;
        
    
    
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}