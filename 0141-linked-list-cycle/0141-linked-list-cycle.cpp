/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    bool checknotcycle(ListNode* temp, vector<ListNode*>& arr) {

        for(int i = 0; i < arr.size(); i++) {

            if(temp == arr[i])
                return false;
        }

        return true;
    }


    bool addtoarr(ListNode* temp, vector<ListNode*>& arr) {

        if(checknotcycle(temp, arr)) {

            arr.push_back(temp);
            return true;
        }

        return false;
    }


    bool hasCycle(ListNode* head) {

        vector<ListNode*> arr;

        ListNode* temp = head;

        while(temp != NULL) {

            if(addtoarr(temp, arr)) {

                temp = temp->next;
            }
            else {

                return true;
            }
        }

        return false;
    }
};