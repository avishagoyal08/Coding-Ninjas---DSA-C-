#include <iostream>
#include <string>
using namespace std;

#include<stack>
int countBracketReversals(string input) {
	// Write your code here
    char c1,c2;
    int l = input.length();
    if(l%2!=0)
        return -1;
    
    stack<int> s;
    int i,count=0;
    for(i=0;i<l;i++)
    {
        if(input[i]=='{')
            s.push(input[i]);
        if(input[i]=='}')
        {
            if(s.empty())
                s.push(input[i]);
            else
            {
                if(s.top()=='{')
                {
                    s.pop();
                }
                else if(s.top()!='{')
                {
                    s.push(input[i]);
                }
            }
        }
    }
    
    while(!s.empty())
    {
        c1=s.top();
        s.pop();
        c2=s.top();
        s.pop();
        if(c1==c2)
        {
            count++;
        }
        else
            count=count+2;
    }
    return count;
    
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}