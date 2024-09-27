#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    Queue(int n)
    {
        size = n;
        arr = new int(n);
        front = -1;
        rear = -1;
    }
    void enqueue(int x)
    {
        if (rear == size || front > rear)
        {
            cout << "Overflow\n";
        }
        else
        {

            arr[rear] = x;
            rear++;
        }
    }

        int dequeue()
        {
            if ((front == -1 && rear == -1) || (front == rear))
            {
                return -1;
            }
            else
            {
                int data = arr[front];
                arr[front] = -1;
                front++;
                if (front == -1 && rear == -1)
                {
                    front = 0;
                    rear = 0;
                }

                return data;
            }
        }
    };

int main()
{
    
}