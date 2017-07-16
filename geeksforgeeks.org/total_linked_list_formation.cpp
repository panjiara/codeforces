#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int t;
    cin>>t;
  int flag=0;
  struct node *head,*x,*y;

    while(t--)
    {
        if(flag==0)
        {
            x=  (struct node*)malloc(sizeof(struct node));
          head=x;
          flag=1;
       }
       else
       {
           y=(struct node*)malloc(sizeof(struct node));
           x->next=y;
           x=y;

       }
}
x->next=NULL;
    struct node *r=head;
    while(r!=NULL)
    {
        cin>>(r->data);
        r=r->next;
    }
    r=head;
    while(r!=NULL)
    {
        cout<<(r->data)<<endl;
        r=r->next;

    }






    return 0;
}
