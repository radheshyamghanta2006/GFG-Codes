//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  int fun(int x,int A,int B,int C){
      return A*x*x + B*x + C;
  }
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        //Code with Radheshyam (.^.)
        int n = arr.size();
        vector<int> result(n);
        
        int l = 0, r = n - 1;
        
        int idx = (A >= 0) ? (n-1) : 0;
        
        while (l <= r){
            int leftval = fun(arr[l],A,B,C);
            int rightval = fun(arr[r],A,B,C);
            
            if(A >=0 ){
                if(leftval > rightval){
                    result[idx--] = leftval;
                    l++;
                }else{
                     result[idx--] = rightval;
                    r--;
                }
            } else{
                if(leftval < rightval){
                    result[idx++] = leftval;
                    l++;
                }
                else{
                     result[idx++] = rightval;
                    r--;
                }
            }
        }
        return result;
        
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

        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();

        Solution obj;
        vector<int> ans = obj.sortArray(arr, a, b, c);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends