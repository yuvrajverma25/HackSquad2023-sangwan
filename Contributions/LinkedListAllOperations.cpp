#include<iostream>
#include<math.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node* start = NULL;
void insertionAtBegin()
{
    Node *temp = new Node();
    cout<<"Enter the data in the node: ";
    cin>>(temp->data);
    temp->next = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else{
        temp->next = start;
        start = temp;
    }    
}
void insertionAtEnd()
{
    Node *temp = start;
    Node *ptr = new Node();
    cout<<"Enter the data in the node: ";
    cin>>(ptr->data);
    ptr->next = NULL;
    if(start == NULL)
    {
        start = ptr;  
    }
    else{
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}
void insertionAtPosition()
{
    Node *temp = new Node();
    cout<<"Enter the data in the node: ";
    cin>>(temp->data);
    temp->next = NULL;
    int pos;
    cout<<"\nEnter the position you want to insert the node: ";
    cin>>pos;
    Node *ptr, *prev;
    ptr = start;
    prev = NULL;
    if(pos == 1)
    {
        if(start == NULL)
        {
            start = temp;
        }
        else{
            temp->next = start;
            start = temp;
        }
    }
    else{
        for(int i=1; i<pos; i++)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
    }
    
}
void printNode()
{
    Node *temp;
    temp = start;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<<(temp->data)<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deletionAtBegin()
{
    if(start == NULL)
    {
        cout<<"Nothing to delete "<<endl;
        return;
    }
    else{
        Node *temp;
        temp = start;
        start = temp->next;
        free(temp);
        cout<<"Node deleted Successfully!"<<endl;
    }
}
void deletionAtEnd()
{
    if(start == NULL)
    {
        cout<<"Nothing to delete"<<endl;
        return;
    }
    Node *temp, *prev;
    temp = start;
    prev = NULL;
    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    cout<<"Node deleted successfully!"<<endl;
}
void deletionAtPosition()
{
    int pos;
    cout<<"Enter the position from where you want to delete the node: ";
    cin>>pos;
    if(pos == 1)
    {
        if(start == NULL)
        {
            cout<<"Nothing to delete"<<endl;
            return;
        }
        else{
            Node *temp;
            temp = start;
            start = temp->next;
            free(temp);
            cout<<"Node deleted successfully!"<<endl;
        }
    }
    else{
            Node *curr, *prev, *next;
            curr = start;
            prev = NULL;
            for(int i=1; i<pos-1; i++)
            {
                curr = curr->next;
            }
            next = curr->next;
            curr->next = next->next;
            free(next);
            cout<<"Node deleted successfully!"<<endl;
    }
}
void reverseLinkedList()
{
    if(start == NULL)
    {
        cout<<"Nothing to reverse"<<endl;
        return;
    }
    Node *curr, *prev, *nt;
    prev = NULL;
    curr = start;
    while(curr != NULL)
    {
        nt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nt;
    }
    start = prev;
}
void findMiddleNode()
{
    if(start == NULL)
    {
        cout<<"No nodes present"<<endl;
        return;
    }
    int count =1;
    Node *temp = start;
    Node *ptr;
    ptr = start;
        int pos = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    if(count%2 == 0)
    {
         pos = count/2;
    }
    else{
         pos = ceil(count/2);
    }
    for(int i=1; i<pos; i++)
        {
            ptr = ptr->next;
        } 
        cout<<"Data is: "<<(ptr->data)<<endl;
}
void findMidWithOneLoop()
{
    if(start == NULL)
    {
        cout<<"No nodes present"<<endl;
        return;
    }
    Node *t1, *t2;
    t1 = start;
    t2 = start;
    while(t2->next!=NULL && t2->next->next!=NULL)
    {
        t1 = t1->next;
        t2 = t2->next;
        t2 = t2->next;
    }
    cout<<"Data is: "<<(t1->data)<<endl;
}
int main()
{
    int n;
    char c;
    do{
        cout<<"1. Insertion at Begin Operation: \n2. Insertion at End Operation: \n3. Deletion At Begin Operation: \n4. Insertion at Specific position operation: \n5. Deletion at end operation: \n6. Deletion at specific position: \n7. Reverse the Linked List: \n8. Find the middle node of the Linked List: \n9. Middle with only one loop\nEnter your choice: ";
        cin>>n;
        switch (n)
        {
            case 1:
                insertionAtBegin();
                printNode();
                break;
            case 2:
                insertionAtEnd();
                printNode();
                break;
            case 3:
                deletionAtBegin();
                printNode();
                break;
            case 4:
                insertionAtPosition();
                printNode();
                break;
            case 5:
                deletionAtEnd();
                printNode();
                break;
            case 6:
                deletionAtPosition();
                printNode();
                break;
            case 7:
                reverseLinkedList();
                printNode();
                break;
            case 8:
                findMiddleNode();
                printNode();
                break;
            case 9:
                findMidWithOneLoop();
                printNode();
                break;

            default:
                cout<<"Enter the correct choice: "<<endl;
                break;
        }
        cout<<"Do you want to continue (y/n): ";
        cin>>c;
    }while(c == 'y' || c=='Y');
}