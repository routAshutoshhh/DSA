#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a node into the BST
Node* insertIntoBST(Node* &root, int d) {
    // Base case: if the root is NULL, insert the new node
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    // Recursively insert into the left or right subtree
    if (d < root->data) {
        root->left = insertIntoBST(root->left, d);
    } else {
        root->right = insertIntoBST(root->right, d);
    }

    return root;
}

// Function to perform BFS traversal
void BFS(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of level

    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL) {
            // End of root level
            cout << endl;
            if (!q.empty()) {
                // Add marker for next level
                q.push(NULL);
            }
        } else {
            // Print node data
            cout << temp->data << " ";
            // Add left and right children to the queue
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

//function to delete a particular node from the bst
Node* deletefromBST(Node* root  int val){
    //base case it means there is no root
    if(root == NULL){
        return root;
    }
    //data mil gya khojna band karo ab aage ka hisab karo 
    if(root->data == val){
        //case 0
        //if teh particular node has no child(0 child)
            if (root -> left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

        //case 1
        //if the particular node has 1 child that has to be deleted
            //it has particularly 2 cases 
            //if the node that is to be deleted is the left child 
            if(root->left!=NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            //if the node that is to be deleted is the right child 
            if (root->right!=NULL && root->left == NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }

        //case2
        //if the particular node has 2 child that has to be deleted
        if(root->left!=NULL && root->right !=NULL){
        int mini = minVal(root->right)->data;
        //now since we have got the samllest data from the right subtreee now we going to copy it to the root  value and delete that root valuue and then we going to dekete that min value from the bst
        root->data = mini;
        root->right = deletefromBST(root->right , mini);
        return root;
        }


    }
    else if( root->data > val){
    root->left = deletefromBST(root->left , val);
    return root;
    }

    else{
    root->right = deletefromBST(root->right , val);
    return root;
    }
    

}

int minVal(Node* root){
    cout<<"delivering min value in the tree"<<endl;
    while(root->left!= NULL){
        root = root->left;
    }
    return root->data;
}

int maxVal(Node* root){
    cout<<"delivering max value in the tree"<<endl;
    Node* temp = root;
    while(temp->right!= NULL){
        temp = temp->right;
    }
    return temp->data;
}

// Function to take input and build the BST
void takeInput(Node* &root) {
    int data;
    cout << "Enter data for the BST (-1 to end):" << endl;
    cin >> data;
    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

// Main function
int main() {
    int val;
    //making a node called root of Node type whose value is initially NULL
    Node* root = NULL;
    takeInput(root);
    cout << "Printing the BST:" << endl;
    BFS(root);
    cout<<"the min value after consturcting the BST "<<minVal(root)<<endl;
    cout<<"the max value after consturcting the BST "<<maxVal(root)<<endl;
    cout<<"ENter the value you want to delete from BST"<<endl;
    cin>>val;
    deletefromBST(root , val);
    BFS(root);
    return 0;
}
