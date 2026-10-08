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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> mp;
        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                mp[temp->val]++;
                temp=temp->next;
            }
        }        
        ListNode* head=new ListNode;
        ListNode* temp=head;        
        for(auto it:mp){
            int value=it.first;
            int freq=it.second;
            while(freq--){
                ListNode* newNode=new ListNode(value);
                temp->next=newNode;
                temp=temp->next;                        
            }
        }
        return head->next;
    }
};