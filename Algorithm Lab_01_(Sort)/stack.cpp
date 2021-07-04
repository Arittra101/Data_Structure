#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define max 10
typedef struct{

    int a[max];
    int top=0;

} Stack;

void push(Stack *s,int item)      // here s is pointer type so need to use ->
{
    if(s->top==max)
        cout<<"STACK IS FULL"<<endl;
    else{
        s->a[s->top]=item;
        s->top++;
    }
}
void pop(Stack *s)
{
    if(s->top==0)
    cout<<"STACK IS EMPTY"<<endl;
    else{

        s->top--;

    }
}
void print(Stack *s)
{
    for(int i = s->top-1;i>=0;i--)  //top value when 0 the 0-1 = -1 that is !>=0 so stop
        cout<<s->a[i]<<endl;
    //cout<<endl;
}
int main()
{
   Stack s;
   push(&s,12);
   push(&s,13);
   push(&s,4);
   push(&s,3);

   pop(&s);
   print(&s);

}
