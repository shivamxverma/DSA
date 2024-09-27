#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int top;
    int *arr;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow\n";
        }
        else
        {
            int data = arr[top];
            top--;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack UnderFlow\n";
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    void display()
    {
        while (top >= 0)
        {
            cout << arr[top] << " ";
            top--;
        }
        cout << endl;
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(11);
    st.push(20);
    st.push(19);
    st.push(15);
    // st.push(89);
    st.display();
    return 0;
}