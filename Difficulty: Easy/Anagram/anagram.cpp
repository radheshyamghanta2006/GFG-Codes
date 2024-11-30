//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Code with Radheshyam (.^.)
        int n1=s1.size();
        int n2=s2.size();
        if(n1!=n2) return false;
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<n1;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        return freq1==freq2;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends