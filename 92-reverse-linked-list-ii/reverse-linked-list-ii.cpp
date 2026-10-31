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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right ) {
            return head;
        }
        ListNode* bl=nullptr;
        ListNode* l=nullptr;
        ListNode* r=nullptr;
        ListNode* rn=nullptr;
        ListNode* temp=head;
        int count=1;
        while(temp != nullptr){
            if(count == (left -1)){
                bl=temp;
            }
            if(count == (left)){
                l=temp;
            }
            if(count == (right)){
                r=temp;
            }
            if(count == (right+1)){
                rn=temp;
            }
            temp=temp->next;
            count++;
        }
        ListNode* prev = nullptr;
        ListNode* curr = l;
        ListNode* next = nullptr;
        while(curr != rn){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(bl != nullptr){
            bl->next=prev;
        }
        else{
            head=prev;
        }
        l->next=rn;
        return head;
    }
};