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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* temp = new ListNode(0);
        ListNode* head = temp;

        int carry = 0;

        while (temp1 != NULL || temp2 != NULL || carry != 0) {
            int x = 0;
            int y = 0;

            if (temp1 != NULL) {
                x = temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != NULL) {
                y = temp2->val;
                temp2 = temp2->next;
            }

            int sum = x + y + carry;

            carry = sum / 10;
            int digit = sum % 10;

            ListNode* addedup = new ListNode(digit);

            temp->next = addedup;
            temp = temp->next;
        }

        return head->next;
    }
};