//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n=str.size();
        vector<int>lp(n,0);
        int j=0;
        int i=1;
        while(i<n){
            if(str[j]==str[i]) {
                lp[i]=j+1;
                i++; j++;
            }
            else {
                if(j>0){
                    j=lp[j-1];
                }
                else i++;
            }
               
        }
        return lp[n-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends