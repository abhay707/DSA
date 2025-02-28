#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;
    n = new Node;
    n->left = NULL;
    n->right = NULL;
    n->data = data;
};

void Insort(struct Node *root)
{
    if (root != 0)
    {
        Insort(root->left);
        cout << root->data<<" ";
        Insort(root->right);
    }
};

int isBST(struct Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main()
{

    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    Insort(p);
    cout<<"\n";
    cout<<isBST(p);
    return 0;
}