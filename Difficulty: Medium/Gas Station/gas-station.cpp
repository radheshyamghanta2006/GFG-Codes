class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  Code with Radheshyam (.^.)
        
        int ans = 0;
        int currGas = 0;
        int total = 0;
        int req = 0;
        
        for(int i=0;i<cost.size();i++){
            // if the total gase required is greater than total gase have 
            // then we should retrurn -1 because theare can't be any ans
            req += cost[i];
            total += gas[i];
        }
        if(total < req) return -1;
        
        
        for(int i=0;i<gas.size();i++){
            //Store the amount of gase for every gase station 
            // after travel to the another gase station
            currGas += gas[i] - cost[i];
            
            // If the currGas is less than 0 then its not 
            //the ans then update the curr gase and ans
            if(currGas < 0){
                currGas = 0;
                ans = i+1;
            }
        }
        return ans;
    }
};