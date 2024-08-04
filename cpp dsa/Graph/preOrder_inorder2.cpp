//construct a binary tree using inorder and preorder traversal given 
//method 2 using map so that we can reduce the TLE

//{ Driver Code Starts
//

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

/*Complete the code here.
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
    //create Mapping of the element of inorder with its index so make the search for the index in  O(1)
    void createMapping(int in[], map<int, int> &nodeElementToIndex, int n){
        for(int i = 0; i< n; i++ ){
            nodeElementToIndex[in[i]] = i;
        }
    }    
    
    
    // solving function
    Node* solve(int in[] , int pre[], int &preOrderIndex, int inorderStart, int inorderEnd, int n, map<int,int> &nodeElementToIndex)
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
        int position  = nodeElementToIndex[rootEl];
        
        //recursive calls
        root->left = solve(in, pre, preOrderIndex , inorderStart , position-1,n ,nodeElementToIndex);
        root->right = solve(in, pre, preOrderIndex , position+1 ,inorderEnd, n , nodeElementToIndex);
        
        return root;
    }
    //driver function
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderIndex = 0;
        map<int,int> nodeElementToIndex;
        createMapping(in , nodeElementToIndex, n);
        
        Node* ans = solve(in,pre,preOrderIndex , 0, n-1 ,n,nodeElementToIndex);
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