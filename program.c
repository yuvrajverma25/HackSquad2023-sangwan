#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
}*newnode,*start,*last,*temp;


void create()
{
int value,choice;
   
   
do{ struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the vlaue");
scanf("%d",&value);
newnode->info=value;
newnode->link=NULL;//assigning link to null
   
   
if(start==NULL)
{
start=newnode;
last=newnode;
}
else
{
last->link=newnode;
last=newnode;
last->link=NULL;
}
 //continuing for this
printf("1 to continue");
scanf("%d",&choice);
}
while(choice==1);
}

//displaying the list

void display()
{
printf("\n your link list : ");
temp=start;
while(temp->link!=NULL)
{
printf("%d->",temp->info);
temp=temp->link;
}
printf("%d->",temp->info);
printf("NULL");
}
void main()
{
create();
display();
}


