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
void swapnodes(int x,int y)
{
    if(x==y)
        return ;
            struct node *px=nullptr,*py=nullptr,*cx=head,*cy=head;
       while(cx&&cx->data!=x)
        {
           px=cx;
           cx=cx->link;
       }
       while(cy&&cy->data!=y)
       {
           py=cy;
           cy=cy->link;
       }
       if(cx==nullptr||cy==nullptr)
        return ;
       if(px!=nullptr)
        px->link=cy;
       else
        head=cy;
       if(py!=nullptr)
        py->link=cx;
       else
        head=cx;
        struct node* temp=cy->link;
        cy->link=cx->link;
        cx->link=temp;
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
    print();
swapnodes(3,7);
   print();





    return 0;

}
