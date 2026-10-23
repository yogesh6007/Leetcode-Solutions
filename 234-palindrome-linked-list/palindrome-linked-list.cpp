/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        if (head->next == nullptr){
            return head;
        }
        if (head == nullptr){
            return true;
        }
        while(fast  != nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        temp=head;
        ListNode* p=nullptr;
        ListNode* t=nullptr;
        ListNode* n=slow;
        while( n != nullptr){
            t=n;
            n=n->next;
            t->next=p;
            p=t;
        }
        ListNode* l=head;
        ListNode* r=t;
        int count=0;
        int m=0;
        while(l != slow){
            m++;
            if (l->val == r->val){
                count++;
            }
            l=l->next;
            r=r->next;
        }
        if (count == m){
            return true;
        }
        else{
            return false;
        }   
    }
};