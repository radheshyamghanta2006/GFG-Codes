//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int singleDigit(int n) {
        // code here
        int ans=0;
        while(n>0 || ans>9){
            if(n==0){
                n=ans;
                ans=0;
            }
            ans+=n%10;
            n=n/10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.singleDigit(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends