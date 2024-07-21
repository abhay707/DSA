#include<iostream>
using namespace std;
int MAXSIZE=100;
int main()
{
int stack[MAXSIZE];
int i, item,data,TOP=-1;
for(;;)
{
cout<<"Press 1 for PUSH\n"<<"Press 2 for POP\n"<<"Press 3 for PEEK\n"<<"Press 4 for Print Data of Stack\n"<<"Press 9 to Exit\t";
cin>>item;
switch(item)
{
case 1:
if(TOP==MAXSIZE-1)
{
cout<<"Overflow";
exit(0);
}
cout<<"Enter Value ";
cin>>data;
TOP=TOP+1;
stack[TOP]=data;
break;
case 2:
if(TOP==-1)
{
cout<<"Underflow";
exit(0);
}
TOP=TOP-1;
break;
case 3:
if(TOP==-1)
{
cout<<"Underflow";
exit(0);
}
cout<<stack[TOP]<<"\n";
break;
case 4:
for(i=TOP;i>=0;i--)
{
cout<<stack[i]<<"\t";
}
cout<<"\n";
break;
case 9:
exit(0);
break;
}
}
return 0;
}