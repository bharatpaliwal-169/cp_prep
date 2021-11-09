// given a tree check if its inorder is palindrome or not */
// challenge is to do it in o(h) , h is height of tree

// simple approach is fine but this is best.


#include<bits/stdc++.h>
using namespace std;
class Tree {
      public:
          int val;
          Tree *left;
          Tree *right;
};
void sol1(Tree* root, stack<Tree*>& s) {
    while (root) {
        s.push(root);
        root = root->left;
    }
}
void sol2(Tree* root, stack<Tree*>& s) {
    while (root) {
        s.push(root);
        root = root->right;
    }
}
bool solve(Tree* root) {
    stack<Tree*> s1, s2;
    sol1(root, s1);
    sol2(root, s2);
    while (!s1.empty() && (!s2.empty())) {
        auto x = s1.top();
        // cout<<x->val<<" ";
        auto y = s2.top();
        // cout << y->val << " ";
        s1.pop();
        s2.pop();
        if (x->val != y->val) return false;
        sol1(x->right, s1);
        sol2(y->left, s2);
    }
    return true;
}