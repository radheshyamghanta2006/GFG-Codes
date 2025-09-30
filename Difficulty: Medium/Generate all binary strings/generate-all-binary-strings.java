class Solution {
    void helper(List<String>ans, String curr, int n){
        // base case 
        if(curr.length() == n){
            ans.add(curr);
            return;
        }
        // Recursive case
        helper(ans , curr+'0',n);
        
        helper(ans , curr+'1',n);
    }
    
    public ArrayList<String> binstr(int n) {
        // code with Radheshyam (.^.)
        
        ArrayList<String> ans = new ArrayList<String>();
        helper(ans,"",n);
        return ans;
    }
    
}
