/*
Problem statement
You have been given a Binary Search Tree (BST). Your task is to flatten the given BST to a sorted list. More formally, you have to make a right-skewed BST from the given BST, i.e., the left child of all the nodes must be NULL, and the value at the right child must be greater than the current node.

A binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a value greater than all the values in the node's left subtree and less than those in its right subtree.

Follow Up :
Can you solve this in O(N) time and O(H)  space complexity?
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N <= 5000
0 <= node.data <= 10^9, (where node data != -1)

Where 'N' denotes the number of nodes in the given tree.

Time Limit: 1 second
Sample Input 1
2
10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
5 -5 8 -1 -1 -1 -1
Sample Output 1
2 -1 6 -1 8 -1 10 -1 11 -1 12 -1 15 -1 -1
-5 -1 5 -1 8 -1 -1
*/


//code:

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

//making the inorder Vector
void inorderMaker(TreeNode<int>* root  , vector<int> &inorder){
    //base case
    if (root == NULL){
        return ;
    }
    //left
    inorderMaker(root->left,inorder);
    //node push karo 
    inorder.push_back(root->data);
    //right jao;
    inorderMaker(root->right , inorder);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorder;
    //inorder vector ban gya
    inorderMaker(root , inorder);
    //tree Node bnaa lo
    TreeNode<int>* newRoot = new TreeNode<int>(inorder[0]);
    //ek aur pointer  bana lo jo same newRoot ko point kare so usko hi traverse kar paye 
    TreeNode<int>* curr = newRoot;

    for ( int i = 1; i < inorder.size(); i++){
        TreeNode<int>* temp = new TreeNode<int>(inorder[i]);
        curr->right = temp;//right ko to the next element point karwana hia 
        curr->left = NULL;//left ko null 
        curr = temp ;//cucrrent pointer ko age badhao 
    }

    //fdinallt last step last node ke left and right ko NULL point karwa do
    curr->right = NULL;
    curr->left = NULL;

    return newRoot;


}
