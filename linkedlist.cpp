#include <iostream>
using namespace std;

//  blueprint of Node

class Node{

public:

	int data;
	Node* next;

	

	Node(int d){

		
		data = d;
		next = NULL;

	}


};


//  blueprint of linked list

class LinkedList{

public:
	Node* head;

	//  default constructor

	LinkedList(){
		head = NULL;
	}

	//  constructor

	LinkedList(Node* n){
		head = n;
	}



	void insertAtEnd(Node* n){

			
			Node* ptr = head;

			while(ptr->next!=NULL){
				ptr = ptr->next;
			}

			ptr->next = n;
			cout << "inserted at the end"<<endl;


		


	}

	// insert at begngging 
	void insertAtBeg(Node* n){

		n->next = head;
		head = n;

	}


	//  delete 1st node in LL

	void deleteFirst(){
		Node* temp = head;
		head = head->next;
		delete temp;
	}

	//  delete from  last 
	void deleteLast(){
		Node* ptr = head;
		while(ptr->next->next!=NULL){
			ptr = ptr->next;
		}

		Node* temp = ptr->next;
		ptr->next = NULL;
		delete temp;


	}

	//  insert at given position

	void insterAt(int position,Node* n){

		Node* ptr = head;
		int i = 1;
		while(i<position-1){
			ptr = ptr->next;
			i++;
		}

		n->next = ptr->next;
		ptr->next = n;




	}

	// search in a linked list
	void search(int val){

		Node* ptr = head;

		while(ptr!=NULL){
			if(ptr->data==val){
				cout << "found: "<<ptr->data<<endl;
				return;
			}
			ptr = ptr->next;
		}
		cout << "not found"<<endl;

	}


	// sorted insert in a liked list

	void sortedInsert(Node* n){

		
	}


	//  print the linked list


	void printList(){
		if(head==NULL){
			cout << "empty List"<<endl;
		}
		else{
			Node* ptr = head;

			while(ptr!=NULL){
				cout << ptr->data<<"->";
				ptr = ptr->next;
			}
			cout << endl;

		}
	}


};





int main(){


	Node* node1 = new Node(1);
	Node* node2 = new Node(2);
	Node* node3 = new Node(3);
	Node* node4 = new Node(4);
	Node* node5 = new Node(5);
	Node* node6 = new Node(6);
	Node* node7 = new Node(7);
	Node* node8 = new Node(8);
	Node* node9 = new Node(9);


	LinkedList* myList = new LinkedList(node1);  // initilised the head node

	myList->insertAtEnd(node2);
	myList->insertAtEnd(node3);
	myList->insertAtEnd(node4);
	myList->insertAtEnd(node5);
	myList->insertAtEnd(node6);
	myList->insertAtEnd(node7);
	myList->insertAtEnd(node8);
	// myList->insertAtBeg(node9);
	myList->deleteFirst();
	myList->deleteLast();
	myList->insterAt(3,node9);
	myList->printList();
	myList->search(10          );


}
