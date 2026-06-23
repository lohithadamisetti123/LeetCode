class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) { 
        vector<int> res;
       for(int i=0;i<k;i++){
        res.push_back(arr[i]);
       }
       for(int i=k;i<arr.size();i++){
           if(abs(res.front()-x)>abs(arr[i]-x)){
               res.erase(res.begin());
               res.push_back(arr[i]);
           }
           else if(abs(res.front()-x)==abs(arr[i]-x)&& res.front() > arr[i]){
               res.erase(res.begin());
               res.push_back(arr[i]);
           }
       }
       return res;
    }
};
