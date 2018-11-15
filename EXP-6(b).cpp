#include<iostream>
#include<string.h>
using namespace std;
int stackk[20];
int top=-1;
void push(int data)
{
    stackk[++top] = data;
}

int pop()
{
    return stackk[top--];
}
int main()
{
char arr[20],*e;
int number,n1,n2,n3;
cout<<"Enter the string";
cin>>arr;
e=arr;
while(*e!='\0')
{
    if(isdigit(*e))
    {
        number=*e-48;

        push(number);
    }
    else
    {
        n1=pop();
        n2=pop();
        switch(*e)
            {
            case '+':
                n3=n1+n2;
                break;
            case '-':
                n3=n1-n2;
                break;
            case '*':
                n3=n1*n2;
                break;
            case '/':
                n3=n1/n2;
                break;
            }
            push(n3);
    }
e++;
}
cout<<"Item popped is "<<pop();
}
