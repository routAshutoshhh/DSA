/*
Problem statement
You are given a binary search tree of integers with N nodes. You are also given references to two nodes 'P' and 'Q' from this BST.



Your task is to find the lowest common ancestor(LCA) of these two given nodes.



The lowest common ancestor for two nodes P and Q is defined as the lowest node that has both P and Q as descendants (where we allow a node to be a descendant of itself)



A binary search tree (BST) is a binary tree data structure which has the following properties.

• The left subtree of a node contains only nodes with data less than the node’s data.
• The right subtree of a node contains only nodes with data greater than the node’s data.
• Both the left and right subtrees must also be binary search trees.


Sample Input 1 :
3 5
2 1 3 -1 -1 -1 5 -1 -1
Sample Output 1:
3

*/


    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


//solving this using recursion 
TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
   //base case
   if(root == NULL){
       return NULL;
   }
    //both the nodes are at the right of the bst and hence we will move to that side
   if(root->data < P->data && root->data < Q->data){
       return LCAinaBST(root->right , P ,Q);
   }

    //both the nodes are at the left of the root means all of them are smalller than root
    if (root->data > P->data && root->data > Q->data ){
        return LCAinaBST(root->left, P, Q);
    }
    //final case of one is bigger and other is smaller than root->data 
// in this case we going to only return the rooot of the nodes
    return root;
   


}