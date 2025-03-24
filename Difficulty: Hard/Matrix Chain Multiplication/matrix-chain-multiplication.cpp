//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int solve(int start, int end, vector<int> &arr,vector<vector<int>>&dp){
      if(end-start==1) return 0;
      if(dp[start][end]!=-1) return dp[start][end];
      int ans=INT_MAX;
      for(int i=start+1;i<end;i++){
          int left=solve(start,i,arr,dp);
          int right=solve(i,end,arr,dp);
          ans=min(ans,left+right+arr[start]*arr[i]*arr[end]);
      }
      return dp[start][end]= ans;
  }
    int matrixMultiplication(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int n=arr.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        return solve(0,n-1,arr,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Ends