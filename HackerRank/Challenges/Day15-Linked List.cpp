#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          if(head == nullptr) //if head = null then return a new node with data as
                              //head of our list
            return new Node(data);
            
          Node* previous; //pointer previous node
          Node* temp = head; //pointer temporal node = head
          while(temp){ //while temp != null
              previous = temp; //previous takes temporal/head
              temp = temp->next; //temporal takes next node pointer
          }
          Node* new_node = new Node(data); // new node with data
          previous->next = new_node; // link next node with this
          return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}