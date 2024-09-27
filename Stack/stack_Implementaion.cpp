#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *link;
    node(int d)
    {
        this->data = d;
        this->link = NULL;
    }
};
class stack
{
    node *top;

public:
    stack() { top = NULL; }

    void push(int data)
    {   
        node *temp = new node(data);

        if (temp != NULL)
        {
            cout << "Stack Overflow" << endl;
            // exit(1);
        }
        temp->data = data;
        temp->link = top;
        top = temp;
    }
    bool isEmpty(){
        return top==NULL;
    }
    void display()
    {
        node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow";
            // exit(1);
        }
        else {
            temp = top;
            while (temp != NULL) {
 
                // Print node data
                cout << temp->data;
 
                // Assign temp link to temp
                temp = temp->link;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    };
    int main()
    {
        // int n;
        // cin >> n;
        stack s;
        s.push(10);
        s.push(32);  
        s.push(12);
        s.display();
        return 0;
    }
};