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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if (temp == nullptr){
            return nullptr;
        }
        if (temp->next==nullptr){
            return head;
        }
        while(temp->next!= nullptr){
            if (temp->val == temp->next->val){
                if(temp->next->next == nullptr){
                    temp->next=nullptr;
                }
                else{
                    temp->next=temp->next->next;
                }  
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};