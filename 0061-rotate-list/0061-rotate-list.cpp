class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Find length
        int n = 1;
        ListNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }

        // Remove unnecessary rotations
        k = k % n;

        while (k--) {

            // Reset for every rotation
            temp = head;
            ListNode* prev = NULL;

            // Find last node
            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }

            // Remove last node
            prev->next = NULL;

            // Put last node at front
            temp->next = head;
            head = temp;
        }

        return head;
    }
};