#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left , *right;
    
    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};
//method 1 for building treees 
//to build tree
node* buildTree(node *root){
    int data;
    cout << "Enter the data,enter the data as -1 if you want to insert a null value" << endl;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    } 

    cout<<"enter the value you want to insert into left of the node " << data <<endl;
    root->left = buildTree(root->left);
    cout<<"enter the value you want to insert into the right of the node"<<data<<endl;
    root->right= buildTree(root->right);
    return root;
}

//to visaulaise the tree we do level order traversal or BFS here 

void BFS(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        

        if (temp == NULL){
            //previous level traversed 
            cout<<endl;
            if (!q.empty()){
                //queue shas some elemnents to uske bad null dal do 
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


//building treee using level order traversal 
//method 2

void  buildTreeUsingBFS(node* &root){
    queue<node*> qq;
    int data;
    cout<<"emter the value for the node "<<endl;
    cin>>data;
    root = new node(data);
    qq.push(root);

    while (!qq.empty()){
        node* temp = qq.front();
        qq.pop(); 
        //for the insertion of the left data
        int leftData;
        cout<<"enter the data to be inserted into left of the node "<<temp->data<<endl;
        cin>> leftData;

        if ( leftData!=-1){
            temp->left = new node(leftData);
            qq.push(temp->left);
        }

        //for the insertion of the right data
        int rightData;
        cout<<"enter the data to be inserted into right of the node "<<temp->data<<endl;
        cin>> rightData;

        if (rightData!=-1){
            temp ->right = new node(rightData);
            qq.push(temp->right);
        }

    }
}


int main (){
    node* root = NULL;
    // root = buildTree(root);
    //1 2 3,-1,-1,6,-1,-1,4,24,-1,55,-1,-1,90,-1,-1
    buildTreeUsingBFS(root);
    BFS(root);
   

}