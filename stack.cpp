#include<iostream>
using namespace std;
int MAXSIZE = 100;

int push(int top,int stack){
    
}


int main(){
    int stack[MAXSIZE];
    
    
    int top = -1;

    if (top == MAXSIZE - 1){
        cout<<"OverFlow";
        exit;
    }
    int num,a;
    cout<<"How many value to insert: ";
    cin>>a;

    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the number you want to insert: ";
        cin>>num;

        top+=1;
        stack[top] = num;
    }

    cout<<"Your stack is: ";
    for (int i = 0; i < a; i++)
    {
        cout<<stack[i]<<" ";
    }

    
    
}
    
    