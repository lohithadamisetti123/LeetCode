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
 //problem:1019
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int> res(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    res[i]=arr[j];
                    break;
                }
            }
        }
        return res;
    }
};