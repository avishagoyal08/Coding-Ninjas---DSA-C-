#include <iostream>
#include <string>
using namespace std;

#include<stack>

bool checkRedundantBrackets(string expression) {
    
	// Write your code here
    stack<char> s;
    int i;
    for(i=0;i<expression.length();i++)
    {
        if(expression[i]!= ')' )
        {
            s.push(expression[i]);
           
        }
    else
    {
        int ct=0;
        char a;
    
        
        while(s.top()!='(' )
        {
            ct++;
            s.pop(); //sabhi characters ko pop
            
        }
        if(ct<=1)
              return true;
        s.pop(); //opening bracket ko pop
    }
    }
              return false;

}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}