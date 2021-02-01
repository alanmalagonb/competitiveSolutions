#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int key) {
        ListNode *first = head; 
        ListNode *second = head; 
        for (int i = 0; i < key; i++) 
        { 
            if (second->next == NULL)  
            { 
                if (i == key - 1) 
                    head = head->next; 
                return head; 
            } 
            second = second->next; 
        } 
        while (second->next != NULL) 
        { 
            first = first->next; 
            second = second->next; 
        } 
        first->next = first->next->next; 
        return head; 
    }
};