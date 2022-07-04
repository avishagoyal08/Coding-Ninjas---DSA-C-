#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
//template<typename T>


class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head==NULL)
            return true;
        else
            return false;
    }

    void push(int element) {
        // Implement the push() function
        //eg-pehle 10..phir 20......30->20->10(tail ki side se add karna)
        //new node bnani hogi
        Node *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    int pop() {
        if(isEmpty())
        {
            return -1;
        }
        // Implement the pop() function
        int ans=head->data;
        //head ko pehle delete nhi kar sakte kyuki 
        //phir ham uske next ko access nhi kar payege
        //ek temporary node bnani pdegi
        Node *temp = head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    int top() {
        // Implement the top() function
        if(isEmpty())
        {
            return -1;
        }
        return head->data;
    }
};


int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}