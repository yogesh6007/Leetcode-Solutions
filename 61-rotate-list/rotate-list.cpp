class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        ListNode* temp = head;
        int count = 1;

        while(temp->next != nullptr) {
            temp = temp->next;
            count++;
        }

        temp->next = head;

        k = k % count;

        int steps = count - k;

        while(steps > 0) {
            temp = temp->next;
            steps--;
        }

        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};