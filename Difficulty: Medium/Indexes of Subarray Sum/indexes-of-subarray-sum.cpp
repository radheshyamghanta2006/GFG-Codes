//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int l=0, r=0;
        vector<int>ans;
        bool isfound=false;
        int sum=arr[0];
        int n=arr.size();
        if(target==0){
             ans.push_back(-1);
             return ans;
           //  break;
        }
        while(r<n){
            if(sum==target){
                isfound=true;
                break;
            } else if(sum<target){
                r++;
                if(r<n) sum+=arr[r];
            } else {
                sum -= arr[l];
                l++;
            }
        }
        if(isfound){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
        } else ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends