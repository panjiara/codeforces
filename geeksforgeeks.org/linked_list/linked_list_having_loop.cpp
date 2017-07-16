#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *head=nullptr;
void print()
{
    struct node *z=head;
    while(z!=nullptr)
    {
        if(z->link!=nullptr)
            cout<<z->data<<"->";
        else
            cout<<z->data<<endl;
        z=z->link;
    }
}
int  floyd_cycle_algorithm()
{
    struct node *slow_pointer=head;
    struct node *fast_pointer=head;
    while(slow_pointer&&fast_pointer&&fast_pointer->link)
        {
            slow_pointer=slow_pointer->link;
             fast_pointer=fast_pointer->link->link;
            if(slow_pointer==fast_pointer)
                return 1;
        }
   return 0;


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
    //head->link->link->link->link=head;
  int d=  floyd_cycle_algorithm();
      if(!d)
       print();
       else
        cout<<"sab moh maya hai loop hai bhai saheb"<<endl;


   return 0;
}
