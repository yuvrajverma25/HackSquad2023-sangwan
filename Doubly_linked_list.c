#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start,*tail,*temp,*newnode,*loc;



void insert_at_beginning(){
    int d;
    newnode=malloc(sizeof(struct node));
    printf("enter thedata to be inserted:\n");
    scanf("%d",&d);
    newnode->next=NULL;
    newnode->data=d;
    newnode->prev=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        newnode -> next=start;
        newnode->prev=NULL;
        start->prev=newnode;
        start=newnode;
        
    }
    printf("%d is Successfully inserted at the beginning\n",newnode->data);
}

void insert_at_end()
{
    int d;
    printf("Enter data to insert into list\n");
    scanf("%d", &d);
    newnode=malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=d;
    newnode->prev=NULL;
    if (start == NULL)
    {
        start=newnode;
        
    }
    else
    {
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        
    }
    printf("%d is Successfully inserted at the end\n",d);
}

void insert_after_particular_node(){
    int d,pos,i=0;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data to be inserted:");
    scanf("%d",&d);
    printf("Enter the position to insert the new element:");
    scanf("%d",&pos);
    newnode->next=NULL;
    newnode->data=d;
    newnode->prev=NULL;
   
    temp=start;
   while (temp != NULL && i+1 < pos)
    {
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
    {
        printf("That many nodes are not present in the list\n");
        
    }
    
    else{
        
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        
    }
    printf("%d is Successfully inserted after %d position\n",d,pos);
    
}



 void delete_Node_containg_particular_item(){
  int d;
  struct node *loc,*nextnode;
  printf("Enter the item that is to be deleted: ");
  scanf("%d",&d);
  
  temp=start;
  while(temp!=NULL && temp->data!=d){
      loc=temp;
      temp=temp->next;
  }
  if(temp==start){
      printf("the element deleted is %d\n",start->data);
      if(temp->next==NULL){
          start=NULL;
      }else{
      nextnode=temp->next;
      nextnode->prev=NULL;
      start=nextnode;
      return;
      }
  }
 
  if(temp!=NULL){
      
      
           loc->next=temp->next;
      nextnode=temp->next;
      if(nextnode!=NULL){
          nextnode->prev=loc;
      }
      printf("The element deleted is %d\n",temp->data);
      
     
  }else{
      printf("Unsuccessful\n");
  }
  
  
}
void display(){
    struct node *temp ;
    temp=start;
    printf("Elements in the linked list are: ");
    
    while (temp->next!= NULL)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}
void main(){
    int ch;
    do{
        printf("\nchoose the operation you want to perform\n");
        printf("1.Insert at the beginning 2. insert at the end 3. insert after a node\n4.Delete node containing value\t5.Display\t6.exit \n");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert_at_beginning();
                    break;
            case 2: insert_at_end();
                    break;
            case 3: insert_after_particular_node();
                    break;
            case 4: delete_Node_containg_particular_item();
                    break; 
            case 5: display();
                    break;
            case 6:printf("existing");
                    exit(0);
            default:printf("Invalid choice");
        }
        
    }while(ch!=6);
}