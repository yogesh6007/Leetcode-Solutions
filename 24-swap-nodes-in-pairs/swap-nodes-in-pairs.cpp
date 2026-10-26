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
    ListNode* swapPairs(ListNode* head) { 
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* p=dummy;
        
        if (head == nullptr || head->next==nullptr){
            return head;
        }
        while(p->next != nullptr && p->next->next != nullptr){
            ListNode* n=p->next;
            ListNode* t=p->next->next;
            n->next=t->next;
            t->next=n;
            p->next=t;
            p=n;
        }
        return dummy->next;
    }
};