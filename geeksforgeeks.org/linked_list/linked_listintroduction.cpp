#include<bits/stdc++.h>
using namespace std;
//#define N NULL;
struct node
{
    int  data;
    struct node *next;
};
int main()
{
   struct node *head=NULL;
   struct node *second=NULL;
   struct node *last=NULL;
   head = (struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   last=(struct node*)malloc(sizeof(struct node));
   head->data=5;
   head->next=second;
   second->data=2;
   second->next=last;
   last->data=3;
   last->next=NULL;
   struct node *n=head;
   while(n!=NULL)
{

    cout<<n->data<<endl;
    n=n->next;
}
struct node *new_node=NULL;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=10;
new_node->next=head;
head=new_node;
n=head;
while(n!=NULL)
{

    cout<<n->data<<endl;
    n=n->next;
}
struct node *sabse_last;
sabse_last=(struct node*)malloc(sizeof(struct node));
sabse_last->data=20;
last->next=sabse_last;
sabse_last->next=NULL;
n=head;
while(n!=NULL)
{
    cout<<n->data<<endl;
    n=n->next;
}






    return 0;
}
