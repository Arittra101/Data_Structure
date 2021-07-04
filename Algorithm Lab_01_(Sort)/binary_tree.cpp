#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef struct node Node;
#define pii  pair<lli, lli>
#define vi vector<lli>
#define pb push_back
#define mp make_pair
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define en "\n"

struct node
{
    int data;
    node *r_child;
    node *l_child;
    node *parent;
};
Node *create_Node(int data)
{

    Node* new_node = new Node;
    if(new_node==NULL) cout<<"Could not create"<<endl;


    new_node->data = data;
    new_node->r_child = NULL;
    new_node->l_child = NULL;
    new_node->parent =NULL;

    return new_node;

}
void add_right_child(Node *node,Node *child)
{
    node->r_child = child;
    if(child!=NULL) child->parent = node;

}

void add_left_child(Node *node,Node *child)
{
    node->l_child = child;
    if(child!=NULL) child->parent = node;
}

Node *bst_insert(Node *root,Node *node)
{

    if(root==NULL)
    {
        root = node;
        return root;
    }

    Node *parent_Node = NULL;
    Node *current_Node = root;

    while(current_Node!=NULL)
    {
        parent_Node = current_Node;
        if(node->data<current_Node->data)
        {
            current_Node = current_Node->l_child;
        }
        else{
            current_Node = current_Node->r_child;
        }
    }

    if(parent_Node->data<node->data)
        add_right_child(parent_Node,node);
    else
        add_left_child(parent_Node,node);

    return root;

}
Node* create_bst()
{

    int a[]={5,17,3,7,12,19,1,4};
    Node *node;
    Node *root = NULL;
    for(int i=0;i<8;i++)
    {
        node = create_Node(a[i]);
        root = bst_insert(root,node);
    }
    return root;
}

Node* Node_search(Node *root,int data)
{
    Node *current_node = root;

    while(current_node!=NULL)
    {
        if(current_node->data==data)
            return current_node;
        else if(current_node->data<data)
            current_node = current_node->r_child;
        else if(current_node->data>data)
            current_node = current_node->l_child;

    }
    return current_node;
}
void inorder(Node *node)
{
    if(node->l_child!=NULL)
        inorder(node->l_child);
    cout<<node->data;
    if(node->r_child!=NULL)
        inorder(node->r_child);

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Node *s = create_bst();
    inorder(s);
    cout<<endl;
    Node *node = Node_search(s,1);

    if(node!=NULL) cout<<"Found "<<node->data<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}

