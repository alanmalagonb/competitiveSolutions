#include <bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *prev;
    Node *next;
    Node() : val(0), next(nullptr), prev(nullptr) {};
    Node(int x) : val(x), next(nullptr), prev(nullptr) {};
};

class MyLinkedList {

private:
    Node *head;
    int size;
    Node *tail;

public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= size) return -1;
        Node *cur = head;
        while(index>0){
            cur = cur->next;
            index--;
        }
        return cur->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (size==0){
            head = newNode;
            tail = head;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (size == 0){
            head = newNode;
            tail = head;
        } else {
            Node *cur = head;
            while(cur->next != nullptr) cur=cur->next;
            cur->next = newNode;
            newNode->prev = cur;
        }
        size++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > size) return;
        if(index == size){
            addAtTail(val);
        }else if(index == 0){
            addAtHead(val);
        }else{
            Node *cur = head;
            Node* newNode = new Node(val);
            while(index>1){
                cur = cur->next;
                index--;
            }
            newNode->next = cur->next;
            newNode->prev = cur;
            newNode->next->prev = newNode;
            cur->next = newNode;
            size++;
        }
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index >= size) return;
        if(index == 0){
            head = head->next;
            if(head) head->prev = nullptr;
        }else{
            Node *cur = head;
            while(index>1){
                cur = cur->next;
                index--;
            }
            if(cur->next->next == nullptr){
                cur->next = nullptr;
            }else{
                cur->next = cur->next->next;
                cur->next->prev = cur;
            }
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */