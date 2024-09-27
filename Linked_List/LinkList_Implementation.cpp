#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
};
node *arraytoll(vector<int> &v, int n)
{
    node *head = new node(v[0], nullptr);
    node *mover = head;
    for (int i = 1; i < n; i++)
    {
        node *temp = new node(v[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int checkElement(node *head, int ele)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        if (head->data = ele)
        {
            return ele;
        }
    }
    return -1;
}
node *DeleteTail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
node *DeleteHead(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int length(node *head)
{
    node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
node *DeleteAny(node *head, int index)
{
    if (head == NULL)
    {
        return head;
    }
    // If Index is equal to 1 
    if (index == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    // If Index is equal to n
    // if (index == length(head))
    // {
    //     node *temp = head;
    //     while (temp->next->next != NULL)
    //     {
    //         temp = temp->next;
    //     }
    //     free(temp->next);
    //     temp->next = nullptr;
    //     return head;
    // }
    // If index is equal to k
    node *temp = head;
    node *prev = NULL;
    int count = 0;
    while(temp!=NULL){
        count++;
        if(count == index){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *head = arraytoll(arr, n);
    print(head);
    // head = DeleteTail(head);
    // print(head);
    // head = DeleteHead(head);
    // print(head);
    int k;
    cin >> k;
    head = DeleteAny(head, k);
    print(head);
    return 0;
}