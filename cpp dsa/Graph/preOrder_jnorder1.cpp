//construct a binary tree using preorder and inorder traversal 
// method 1

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/


class Solution{
    public:
    //function fot finding the position of the element in the inorder 
    int findPosition(int in[], int element, int n  ){
        for(int i =0; i< n ; i++){
            if (element == in[i])
            return i;
        }
        return -1;
    }
    
    // solving function
    Node* solve(int in[] , int pre[], int &preOrderIndex, int inorderStart, int inorderEnd, int n)
    {
        //base case
        if(preOrderIndex >= n || inorderStart>inorderEnd){
            return NULL;
        }
        
        //finding the element for the root
        int rootEl = pre[preOrderIndex++];
        //creating the root element
        Node* root = new Node(rootEl);
        //finding out the position of the that node /element in the inorder array because its left will be left side of the tree and 
        //its right side will be the right side of the tree
        int position  = findPosition(in , rootEl , n);
        
        //recursive calls
        root->left = solve(in, pre, preOrderIndex , inorderStart , position-1,n);
        root->right = solve(in, pre, preOrderIndex , position+1 ,inorderEnd,n);
        
        return root;
    }
    //driver function
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderIndex = 0;
        Node* ans = solve(in,pre,preOrderIndex , 0, n-1 ,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends