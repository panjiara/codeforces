#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node  *link;
};
struct node*head=nullptr;
void print()
{
    struct node *z=head;
     while(z!=NULL)
     {
         cout<<z->data;
         if(z->link==nullptr)
            cout<<endl;
         else
            cout<<"->";
         z=z->link;
    }
}
void ulta_kar_de()
{
    struct node *current=head;
    struct node *prev=nullptr;
    struct node *link;
    while(current!=nullptr)
    {
        link=current->link;
        current->link=prev;
        prev=current;
        current=link;
    }
    head=prev;


}
int main()
{
    int n;
   cin>>n;
    struct node *x;
    int flag=0;
    int mid=n/2;
   while(n--)
   {
       if(flag==0)
       {

             x=(struct node*)malloc(sizeof(struct node));
             cin>>x->data;
             x->link=NULL;
             head=x;
             flag=1;
        }
        else
           {
               struct node *y;
               y=(struct node*)malloc(sizeof(struct node));
               x->link=y;
               cin>>y->data;
               x=y;
            }
    }
    x->link=nullptr;
   print ();
   ulta_kar_de();
   print();


   return 0;
}
