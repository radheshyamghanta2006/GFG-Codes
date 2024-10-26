//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void merge(vector<int>& a, vector<int>& b) {
        // code here
        int m = a.size(), n = b.size();
    int left = m - 1;
    int right = 0;

    // Step 1: Swap elements that are out of order at the boundary
    while (left >= 0 && right < n) {
        if (a[left] > b[right]) {
            swap(a[left], b[right]);
            left--;
            right++;
        } else {
            break;
        }
    }

    // Step 2: Sort both arrays separately to ensure sorted order
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.merge(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends