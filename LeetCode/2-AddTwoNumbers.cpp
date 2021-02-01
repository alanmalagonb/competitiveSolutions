#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr and l2==nullptr) return NULL;
        ListNode* l3 = new ListNode(0);
        ListNode *res = l3;
        int sum = 0;
        int r = 0;
        int s = 0;
        while(l1 or l2){
            if(l1 and l2){
                s = l1->val + l2->val + r;
                l1 = l1->next;
                l2 = l2->next;
            }else if(l1 and l2==nullptr){
                s= l1->val + r;
                l1 = l1->next;
            }else if(l1==nullptr and l2){
                s= l2->val + r;
                l2 = l2->next;
            }
            if(s>=10)
            {
                r=s/10;
                s-=10;
            }else r=0;

            ListNode* n = new ListNode(s);
            l3->next = n;
            l3 = l3->next;
        }
        if(r>=10){
            r-=10;
            ListNode* n1 = new ListNode(r);
            l3->next = n1;
            l3 = l3->next;

            ListNode* n2 = new ListNode(r);
            l3->next = n1;
        }else if(r>0){
            ListNode* n3 = new ListNode(r);
            l3->next = n3;
            l3 = l3->next;
        }

        return res->next;
    }

};