#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        data = d;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    
    List(){
        head = NULL;
        tail = NULL;
    }
    
    void push_front(int data){
        
        if(head==NULL){
            Node* n =new Node(data);
            head = tail =n;
        }else{
            
            Node* n = new Node(data);
            n->next = head;
            head =n;
        }
        
    }
    
    void push_back(int data){
        
        if(head==NULL){
            Node* n =new Node(data);
            head = tail =n;
        }else{
            
            Node* n = new Node(data);
            tail->next = n;
            n = tail;
        }
        
    }
    
    void insert(int data, int pos){
        
        Node* temp = begin();
        
        for(int i=0; i<pos-1;i++){
            temp= temp->next;
        }
        
        if(pos == 0){
            push_front(data);
        }else{
            Node* n = new Node(data);
            n->next = temp->next;
            temp->next =n;
        }
    }
    
    bool search(int key){
        int count = 0;
        Node* temp = begin();
        while(temp!= NULL){
            if(temp->data == key){
                cout<<count;
                return true;
            }else{
                count++;
                temp = temp->next;
            }
        }
        
        return false;
    }

    Node* begin(){
        
        return head;
    }
};


int main() {
    
    List l;
    
    l.push_back(3);
    l.push_back(2);
    l.push_front(1);
    l.insert(4,1);
    l.insert(5,0);


 

    Node* temp = l.head;
    
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    if(temp == NULL){
        cout<<"NULL";
    }
    
    if(l.search(2)){
        cout<<"Present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }

    return 0;
}