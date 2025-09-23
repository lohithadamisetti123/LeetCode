class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
     sort(tasks.begin(),tasks.end());
     unordered_map<int,int> freq;
     for(int i:tasks){
        freq[i]++;
     }
     int ans=0;
     for(int i=0;i<tasks.size();i++){
        if(freq[tasks[i]]==1) {
            ans=-1;
            break;
        }
        else if(freq[tasks[i]]==2){
            freq[tasks[i]]=0;
            ans++;
        }
        else {
            ans+=(freq[tasks[i]]+2)/3;
            freq[tasks[i]]=0;
         }
     }
     return ans;
    }
};