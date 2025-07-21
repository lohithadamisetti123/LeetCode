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
    ListNode* insertionSortList(ListNode* head) {
      vector<int> res;
      ListNode* temp=head;
      while(temp!=NULL){
        res.push_back(temp->val);
        temp=temp->next;
      } 
      sort(res.begin(),res.end());
      temp=head;
      int i=0;
      while(temp!=NULL){
        temp->val=res[i++];
        temp=temp->next;
      } 
      return head;
    }
};