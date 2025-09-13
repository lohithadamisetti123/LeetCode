class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int boat=0;
        int i=0,j=people.size()-1;
        while(i<=j){
            if(people[i]==limit){
                boat++;
                i++;
            }
            else if(people[i]<limit){
                if( people[i]+people[j]<=limit){
                    boat++;
                    i++;
                    j--;
                }
                else{
                    boat++;
                    i++;
                }
                
            }
        }
        return boat;
    }
};