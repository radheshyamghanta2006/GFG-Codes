class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code with Radheshyam (.^.)
        int police = 0, thief = 0;
        int N = arr.size();
        while(police < N && arr[police] != 'P') police++;
        while(thief < N && arr[thief] != 'T') thief++;
        int count = 0;
        while(police < N && thief < N){
            if(abs(police - thief) <= k){
                count++;
                police++;
                thief++;
            }
            else if(police < N && police < thief) police++;
            else if(thief < N && police > thief) thief++;
            while(police < N && arr[police] != 'P') police++;
            while(thief < N && arr[thief] != 'T') thief++;
        }
        
        return count;
    }
};