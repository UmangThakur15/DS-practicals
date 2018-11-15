#include<iostream>
#include<string>
using namespace std;
char stackk[20];
int top=-1;
int pre(char c)
{
    if(c== '^'|| c== '$')
    return 3;
    else if(c == '*' || c == '/'|| c=='%')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
void push(char val)
{
    top=top+1;
    stackk[top]=val;
}
int pop()
{
top=top-1;
}
void infix_to_postfix(string s)
{
    int l;
    l = s.length();
    push('N');
    string n;
    for(int i=0;i<l;i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            n=n+s[i];
        }
        else if(s[i]=='(')
        {
            push(s[i]);
        }
        else if(s[i]==')')
        {
            while(stackk[top]!='N' && stackk[top]!='(' )
            {
                char c = stackk[top];
                pop();
                n=n+c;
            }
            if(stackk[top]=='(')
            {
                pop();

            }
        }
        else
        {
            while(stackk[top]!='N' && pre(s[i])<=pre(stackk[top]))
            {
                char c = stackk[top];
                pop();
                n=n+c;
            }
            push(s[i]);
        }
    }
    while(stackk[top]!='N')
    {
        char c = stackk[top];
        pop();
        n=n+c;
    }
    cout<<"the answer is "<<n;
}
int main()
{
string exp;
cout<<"enter the string";
cin>>exp;
infix_to_postfix(exp);
}
