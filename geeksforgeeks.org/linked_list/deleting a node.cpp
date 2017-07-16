#include<bits/stdc++.h>
using namespace std;
struct node {
int data;
struct node *link;
};
int main()
{
    int n;
    cin>>n;
    struct node *head,*x,*y;
    int flag=0;
    while(n--)
    {
        if(flag==0)
        {
            x=(struct node *)malloc(sizeof(struct node));
            head=x;
            flag=1;
        }
        else
        {
            y=(struct node *)malloc(sizeof(struct node));
            x->link=y;
            x=y;
        }
    }
    x->link=nullptr;
    struct node *r=head;
    while(r!=NULL)
    {
        cin>>r->data;
        r=r->link;

    }
    int key =8;
    struct node *z=head,*e;
    while(z->data!=key)
    {
     y=z;
    z=z->link;
    e=z->link;
    }
    y->link=e;
    z->link=nullptr;
    r=head;
    while(r!=NULL)
    {
        cout<<(r->data)<<endl;
        r=r->link;

    }



    return 0;
}
