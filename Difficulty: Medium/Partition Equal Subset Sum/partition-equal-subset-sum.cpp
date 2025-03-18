//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool solve(vector<int>& arr, int sum,int i,vector<vector<int>>&dp){
      //base case
      if(sum==0) return true;
      if(i==arr.size()) return false;
      //recursive case
      if(dp[i][sum]!=-1) return dp[i][sum];
      bool pic=false;
      bool notpic=false;
      if(arr[i]<=sum) pic=solve(arr,sum-arr[i],i+1,dp);
      notpic=solve(arr,sum,i+1,dp);
      return dp[i][sum]=(pic || notpic);
  }
  bool isSubsetSum(vector<int>& arr, int sum) {
       
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
       return solve(arr,sum,0,dp);
        
    }
    bool equalPartition(vector<int>& arr) {
        // Code with Radheshyam (.^.)
        int total=0;
        for(int i=0;i<arr.size();i++) total+=arr[i];
        if(total%2!=0) return false;
       return  isSubsetSum(arr,total/2);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends