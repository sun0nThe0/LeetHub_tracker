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
    int getlength(ListNode* head){  
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=getlength(headA);
        int lenB=getlength(headB);

        ListNode* tempA =headA;
        ListNode* tempB =headB;

        if(lenA>lenB){
            int diff=lenA-lenB;
            while(diff--) tempA=tempA->next;
        }
        else{
            int diff=lenB-lenA;
            while(diff--) tempB=tempB->next;
        }
    
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }    
};