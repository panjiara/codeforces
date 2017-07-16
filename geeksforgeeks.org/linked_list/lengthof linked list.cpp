
#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *link;
};
void push (struct node **head_ref,int data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->link=*head_ref;
    *head_ref=new_node;
}
void print(struct node *head)
{
    struct node *temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
void search(struct node *head,int y)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==y)
        {
            cout<<"found"<<endl;
            break;
        }
        temp=temp->link;

    }
    if(temp==NULL)
        cout<<"not  found"<<endl;


}
int main()
{
    int n;
    cin>>n;
    struct node *head=NULL;
    for(int i=0;i<n;i++)
    {

        push(&head,i);
    }

     print(head);
     int y;
     cin>>y;
     search(head,y);



    return 0;
}
