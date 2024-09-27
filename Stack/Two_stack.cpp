#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top1;
    int top2;
    int *arr=NULL;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push2(int element){
        if(top2-top1>1)
        { 
        top2--;
        arr[top2]=element;
        }
    }
    int pop2(){

        if(top2<size) 
        {
            int data = arr[top2];
            top2++;
            return data;
        }
    }
    int peek2(){
        if(top2>=0 && top2<size){
            return arr[top2];
        }
    }
    bool isEmpty2(){
        if(top2==size)return true ;
        else
        return false;
    }
    void display2(){
        while(top2<size){
            cout<<arr[top2]<<" ";
            top2++;
        }
        cout<<endl;
    }
    void push1(int element){
        if(size-top1>1)
        { top1++;
        arr[top1]=element;
        }
    }
    int pop1(){
        if(top1>=0) {
            int data = arr[top1];
            top1--;
            return data;
        }
    }
    int peek1(){
        if(top1>=0 && top1<size){
            return arr[top1];
        }
    }
    bool isEmpty1(){
        if(top1==-1)return true ;
        else
        return false;
    }
    void display1(){
        while(top1>=0){
            cout<<arr[top1]<<" ";
            top1--;
        }
        cout<<endl;
    } 
};


int main(){
    int n=7;
    Stack st(n);
    for(int i=0 ; i<n ; i++){
        
        // cout<<"1.Enter element in stack1\n";
        // cout<<"2.Enter element in stack2\n";
        char ch;cin>>ch;
        switch (ch)
        {
            int x;cin>>x;
        case 1:
            st.push1(x);
            break;
        case 2:
            st.push2(x);
            break;
        default:
            break;
        }
    }
    // st.push1(2);
    // st.push1(3);
    // st.push1(5);
    // st.push2(9);
    // st.push2(8);
    // st.push2(10);
    // st.push2(12);
    st.display1();
    st.display2();
    return 0;
}