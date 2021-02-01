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

    int trasvers(ListNode *head){
        ListNode* p = head;
        int length = 0;
        while(p){
            p = p->next;
            length++;
        }
        return length;
    }
    

    ListNode *getValue(ListNode *min, ListNode *max, int dif){
        while(dif > 0){
            max = max->next;
            dif--;
        }
        while(min != max){
            min = min->next;
            max = max->next;
        }
        return max;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL or headB == NULL) return NULL;

        int a = trasvers(headA);
        int b = trasvers(headB);
        int d = abs(a-b);

        if(a>b) return getValue(headB,headA,d);
        else return getValue(headA,headB,d);
    }
    
};