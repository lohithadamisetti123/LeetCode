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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int> res;
        while(temp){
          res.push_back(temp->val);
          temp=temp->next; 
        }
        int i=0,j=res.size()-1,k=0;
        temp=head;
        while(i<=j){
            if(k%2==0){
                 temp->val=res[i++];
            }
            else{
                temp->val=res[j--];
            }
            k++;
            temp=temp->next;
        }
    }
};