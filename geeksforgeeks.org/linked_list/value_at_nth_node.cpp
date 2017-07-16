#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node *link;
};
struct node *head=NULL;
void print()
{
    struct node *z=head;
     while(z!=NULL)
     {
         cout<<z->data;
         if(z->link!=nullptr)
         cout<<"->";
         else
            cout<<endl;
         z=z->link;
    }
}
void atnode (int z)
{
   struct node *k=head;
   int count=z;
   while(count>0)
   {
       k=k->link;
       count--;
   }

      cout<<k->data<<endl;
}


int main()
{
    int n;
   cin>>n;
    struct node *x;
    int flag=0;
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
   int z;
   cin>>z;
   atnode(z);



    return 0;
}
