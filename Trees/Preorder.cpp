#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

vector<int> preorder(struct node* root) {
    vector<int> ans;
    if(root == NULL)return ans;
    stack<node*> st;
    st.push(root);
    while(!st.empty()) {
        root = st.top();
        st.pop();
        ans.push_back(root->data);
        if(root->right != NULL)st.push(root->right);
        if(root->left != NULL)st.push(root->left);
    }
    return ans;
}

int main() {
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    vector<int> ans = preorder(root);
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
