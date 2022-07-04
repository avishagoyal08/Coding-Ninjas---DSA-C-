#include <iostream>
using namespace std;

#include<queue>
#include<stack>

void reverseQueue(queue<int> &input) {
    
	// Write your code here
    stack<int> s;
    int a,x;
    while(!input.empty())
    {
        a = input.front();
        s.push(a);
        input.pop();
    }
    while(!s.empty())
    {
        x = s.top();
        input.push(x);
        s.pop();
    }
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}