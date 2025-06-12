class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code with Radheshyam (.^.)
        int n = arr.size();
        int pos = -1;
        
        // step 1 : Binarry search to find last element << x
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] < x){
                pos = mid;
                low = mid+1;
            } else {
                high = mid - 1;
            }
        }
        
         //Step2 : Twom pointer: pic k closest using distance compare
        int left = pos, right = pos+1;
        
       //skip if arr[right] == x
       if(right < n && arr[right] == x)  right++;
          
        vector<int>result;
        while(left >=0 && right < n && result.size() < k){
            int leftdiff = abs(arr[left] - x);
            int rightdiff = abs(arr[right] - x);
            
            //prefer smaller diff or larger element if tie
            if(leftdiff < rightdiff){
                result.push_back(arr[left]);
                left--;
            }else{
                 result.push_back(arr[right]);
                 right++;
            }
        }
        
        //fill remaining if any
        while(left >= 0 && result.size() < k){
             result.push_back(arr[left]);
                left--;
        }
        
        while(right < n && result.size() < k){
             result.push_back(arr[right]);
                right++;
        }
        return result;
    }
};