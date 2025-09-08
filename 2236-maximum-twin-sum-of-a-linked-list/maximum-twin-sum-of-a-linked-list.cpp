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
    int pairSum(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        stack<int> st;
        while(fast && fast->next){
            st.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        int maxx=0;
        while(slow){
            int sum=st.top()+slow->val;
            st.pop();
            slow=slow->next;
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};