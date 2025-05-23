//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int ans=0;
     void merge(vector<int> &arr,int low, int high, int mid){
        int n1=mid-low+1;
        int n2=high-mid;
        int arr1[n1];
        int arr2[n2];
        
        for(int i=0;i<n1;i++) arr1[i]=arr[i+low];
        for(int i=0;i<n2;i++) arr2[i]=arr[i+mid+1];
        int i=0,j=0,k=low;
        while(i<n1 && j<n2){
            if(arr1[i]<=arr2[j]) arr[k++]=arr1[i++];
            else {
                arr[k++]=arr2[j++];
                ans+=n1-i;
            }
        }
        while(i<n1) arr[k++]=arr1[i++];
        while(j<n2) arr[k++]=arr2[j++];
        
    }
    
    int mergeSort(vector<int> &arr,int low, int high){
        if(low>=high) return 0;
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high,mid);
        return ans;
    }
    int inversionCount(vector<int> &arr) {
       // Code with Radheshyam (.^.)
         int N=arr.size();
        return mergeSort(arr,0,N-1);
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends