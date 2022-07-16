#include<iostream>
#include<queue>

using namespace std;

class Node{

    public:
      int data;
      Node *left;
      Node *right;
};

Node *getNode(int root){

      Node *newNode = new Node();
      newNode->data = root; 
      newNode->left = NULL;
      newNode->right = NULL;

};

Node *Insert(Node *root, int val){

    if(root == NULL){

        root = getNode(val);

    }else if(val <= root->data){

        root->left = Insert(root->left, val);

    }else {

        root->right = Insert(root->right, val);

    }

    return root;
}

void Bfs(Node *root){

    if(root == NULL){
        cout<<"Tree is empty!"<<endl;
        return;
    }
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node *current = q.front();

        cout<<current->data<<" ";

        if(current->left != NULL) q.push(current->left);
        if(current->right != NULL) q.push(current->right);

        q.pop();
    }
}

int main(){


             Node *root = NULL;

             root = Insert(root, 15);
             root = Insert(root, 10);
             root = Insert(root, 20);
             root = Insert(root, 8);
             root = Insert(root, 12);
             root = Insert(root, 17);
             root = Insert(root, 25);

             Bfs(root);
       

    return 0;
}

/*
//                   15
//                  / \
//               10     20
//              /  \    / \
//             8  12   17  25
*/