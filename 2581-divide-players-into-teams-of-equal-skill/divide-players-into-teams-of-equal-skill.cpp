class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size()==1){
            return -1;
       }
       if(skill.size()==2){
         return skill[0]*skill[1];
       }
       sort(skill.begin(),skill.end());
       long long k=skill[0]+skill[skill.size()-1],sum=skill[0]*skill[skill.size()-1];
       for(int i=1;i<skill.size()/2;i++){
          if(skill[i]+skill[skill.size()-i-1]!=k){
            return -1;
          }
          else{
            sum+=(skill[i]*skill[skill.size()-i-1]);
          }
       }
       return sum;
    }
};