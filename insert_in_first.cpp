#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* link;
};

Node* head; // global variable, can be accessed anywhere

void Insert(int x);
void Print();

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = head; 
    head = temp;
}

void Print(){
    Node* temp = head;
    cout<<"The list is: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}

int main(){
    head = NULL; // empty list
    cout<<"How many numbers: ";
    int n,x;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number: ";
        cin>>x;
        Insert(x);
        Print();
    };
};