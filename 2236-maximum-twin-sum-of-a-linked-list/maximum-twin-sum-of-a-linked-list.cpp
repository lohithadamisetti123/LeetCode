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
        vector<int> res;
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
       int i=0,sum=0,maxx=0,n=res.size();
       while(i<n/2){
        sum=res[i]+res[n-i-1];
        maxx=max(maxx,sum);
        i++;
       }
       return maxx;
    }
};