#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
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
void printmiddle(int z)
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
void midl()
{
    struct node *fast_pointer=head,*slow_pointer=head;
    if(head!=nullptr)
    {
        while(fast_pointer!=nullptr&&fast_pointer->link!=nullptr)
        {
            fast_pointer=fast_pointer->link->link;
            slow_pointer=slow_pointer->link;

        }
        cout<<slow_pointer->data<<endl;

    }
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
    printmiddle(mid);
    midl();

   return 0;
}

