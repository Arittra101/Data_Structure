
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef struct Node node;

struct Node
{
    int data;
    node *next;
    node *prev;
};

node *createNode(int data)
{

    node* temp = new node;

    temp->data = data;
    temp->next =NULL;
    temp->prev = NULL;

    return temp;


}
void node_visit(node* head)
{

    node* current_node = head;
    while(current_node!=NULL)
    {
        cout << current_node->data<<" ";
        current_node = current_node->next;
    }
    cout<<endl;
}
void prepend(node* head,node* first)
{

    head->next = first;
    first->prev = head;

}
void swapp(node* max,node* min)
{
    node* max_pre=NULL;
    node* max_nx=NULL;


    node* min_pre=NULL;
    node* min_nx=NULL;


    if(max->prev!=NULL)
        max_pre = max->prev;
    if(max->next!=NULL)
        max_nx = max->next;
    max_data = max->data;

    if(min->prev!=NULL)
        min_pre = min->prev;
    if(min->next!=NULL)
        min_nx = min->next;
    min_data = min->data;


    Node* temp = max;
    max =  min;
    if(max_pre!=NULL)
        max_pre->next = max;

    if(max_nx!=NULL)
        max_nx->prev = max;



    min = temp;
    if(min_pre!=NULL)
        min_pre->next = min;

    if(min_nx!=NULL)
        min_nx->prev = min;


    cout<<max->data<<max->next->data<<max->next->next->data;

}
node* minimum(node* head)
{

    node* temp=head;
    node* current_node = head;
    int min =  head->data;
    while(current_node!=NULL)
    {
        if(current_node->data<min)
        {
            temp = current_node;
        }
        current_node = current_node->next;
    }
    return temp;

}
node* maximum(node* head)
{

    node* temp=head;
    node* current_node = head;
    int min =  head->data;
    while(current_node!=NULL)
    {
        if(current_node->data>min)
        {
            temp = current_node;
        }
        current_node = current_node->next;
    }
    return temp;

}


node* swp(node* head,node* max,node* min)
{
    node* temp=NULL;
    node* x = max;
    node* y = min;
    node* prevX=NULL;
    node* prevY=NULL;
    node* nextX=NULL;
    node* nextY=NULL;



    prevX=x->prev;
    prevY=y->prev;



    temp = y->next;
    y->next = x->next;
    x->next = temp;

    //swap(x->next,y->next);

    if(prevX==NULL)
    {
        head=y;
        prevY->next = x;
    }
    if(prevY==NULL)
    {
        head=x;
        prevX->next = y;
    }
    if(prevX!=NULL&&prevY!=NULL)
    {
        prevX->next=y;
        prevY->next=x;
    }
    return head;

}
int main()
{
    // cout << "D";
    node* head =  createNode(12);


    node* first =  createNode(13);

    prepend(head,first);

    node* second =  createNode(14);
    prepend(first,second);



    node_visit(head);

    node* min = minimum(head);
    node* max = maximum(head);

    node* new_head = swp(head,max,min);


    node_visit(new_head);


}
