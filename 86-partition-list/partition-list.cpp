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
    ListNode* partition(ListNode* head, int x) {
        vector<int> less;
        vector<int> great;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
                less.push_back(temp->val);
            }
            else{
                great.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int i=0,j=0;
        while(temp){
            while(i<less.size()){
                temp->val=less[i++];
                temp=temp->next;
            }
            while(j<great.size()){
                temp->val=great[j++];
                temp=temp->next;
            }
        }
        return head;
    }
};