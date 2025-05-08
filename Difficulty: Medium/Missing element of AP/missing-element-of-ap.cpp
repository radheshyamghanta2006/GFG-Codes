//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // Code with Radheshyam (.^.)
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        int d = arr[1] - arr[0];
        while(s <= e){
            int mid = s+(e-s)/2;
            int nTh = arr[0] + mid*d;
            if(nTh == arr[mid]) s = mid + 1;
            else{
                ans = mid;
                e = mid - 1;
            }
        }
        if(ans == -1) return arr[arr.size()-1] + d;
        return arr[0] + (ans*d);
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
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends