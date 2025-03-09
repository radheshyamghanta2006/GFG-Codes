//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  int palinCount(int left,int right,string &s){
        int count=0;
        while(left>=0 && right<s.size()){
            if(s[left]==s[right]){
                count++;
                left--;
                right++;
            }
            else break;
        }
        return count;
    }
    int countPS(string &s) {
        // Code with Radheshyam (.^.)
        int n=s.size();
        int count=0;
        //odd
        for(int i=0;i<n;i++){
            count+=palinCount(i-1,i+1,s);
        }
        //even
        for(int i=1;i<n;i++){
            count+=palinCount(i-1,i,s);
        }
        return count;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends