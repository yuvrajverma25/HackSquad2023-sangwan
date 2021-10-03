
class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None
        self.prev=None

class LinkedList:
    def __init__(self):
        self.head=None

    def insert(self,data):
        nn=Node(data)
        if (self.head):
            #insert at end
            cur=self.head
            while cur.next:
                cur=cur.next
            nn.prev=cur
            cur.next=nn
            
        else:
            #insert at begning
            self.head=nn
            

    def print(self):
        cur=self.head
        while cur:
            print(cur.data)
            cur=cur.next

    def insert_pos(self,data,pos):
        #insert at position
        nn=Node(data)
        i=1
        cur=self.head
        while i<pos-1:
            cur=cur.next
        nn.prev=cur
        nn.next=cur.next
        nn.next.prev=nn
        cur.next=nn

    def delete(self,pos):
        if pos==1:
            self.head=self.head.next
            self.head.prev=None
        else:
            cur=self.head
            i=1
            while i<pos:
                i+=1
                cur=cur.next
            cur.prev.next=cur.next
            cur.next.prev=cur.prev


ll=LinkedList()
ll.insert(2)
ll.insert(3)
ll.insert(4)
ll.insert_pos(5,2)
ll.delete(2)
ll.print()
ll.delete(1)
ll.print()

