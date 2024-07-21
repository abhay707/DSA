// #include<iostream>
// using namespace std;

// struct node
// {
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int data){
//     struct node *n;
//     n = new node;
//     (*n).left;
//     n->right;
//     n->data = data;
//     return n;
// }

// int main(){

//     struct node *p1 = createNode(2);
//     struct node *p2 = createNode(4);
//     struct node *p3 = createNode(11);

    
//     p1->left = p2;
//     p1->right = p3;
//     return 0;
// }



#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;    
    struct Node* right;    
};

struct Node* createNode(int data){
    struct Node *n;
    n = new Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct Node* root){
    if (root != 0)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node* root){
    if (root != 0)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }
    
}

void InOrder(struct Node* root){
    if (root != 0)
    {
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
    
}

int main(){
    struct Node *p = (createNode(4));
    struct Node *p1 = (createNode(1));
    struct Node *p2 = (createNode(5));
    struct Node *p3 = (createNode(2));
    struct Node *p4 = (createNode(6));
    

    p->left = p1;
    p->right = p4;
    p1->left = p2;
    p1->right = p3;

    cout<<"PreOrder is: ";
    preOrder(p);
    cout<<endl<<"PostOrder is: ";
    postOrder(p);
    cout<<endl<<"InOrder is: ";
    InOrder(p);
    return 0;
}