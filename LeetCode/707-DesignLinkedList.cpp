#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int n){
        val = n;
        next = NULL;
    }    
};

class MyLinkedList {
private:
    ListNode* head;
    int length;
    ListNode* tail;


public:

    /** Initialize data structure*/ 
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        length = 0;
    }
    
    bool isEmpty(){
        return (length==0);
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(isEmpty() || index >= length){
            return -1;
        } 
        ListNode* cur = head;
        while(index>=1){
            cur = cur->next;
            index--;
        }
        return cur->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode *newNode = new ListNode(val);
        if (isEmpty()){
            head = newNode;
            tail = head;
        } else {
            ListNode *temp = head;
            head = newNode;
            head->next = temp;
        }
        length++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode *newNode = new ListNode(val);
        if(isEmpty()){
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > length){
            return;
        }
        if(isEmpty() || index == 0){
            addAtHead(val);
            return;
        }
        else if( index == length){
            addAtTail(val);
            return;
        }
        else{
        
        ListNode *newNode = new ListNode(val);
        ListNode* cur = head;
        while(index > 1){
            cur = cur->next;
            index--;
        } 
        ListNode* temp = cur->next;
        cur->next = newNode;
        newNode->next = temp;

        }
        length++;
    }
    
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index >= length || isEmpty()) {
            return;
        }
        // Delete Head
        else if (isEmpty() || index == 0) {
            ListNode* toDelete = head;
            head = head->next;
            delete(toDelete);
        }
        else {
            ListNode* cur = head;
            int curIndex = 0;
            while(index > 1){
                cur = cur->next;
                index--;
            }
            ListNode* tmp = cur->next;
            cur->next = tmp->next;
            delete(tmp);
        }
        length--;
        updateTail();
    }

    void updateTail() {
        if (isEmpty()) {
            tail = NULL;
            return;
        }
        ListNode* walk = head;
        while(walk->next) walk = walk->next;
        tail = walk;
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