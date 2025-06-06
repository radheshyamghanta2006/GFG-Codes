class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // Code with Radheshyam (.^.)
        vector<int>res;
        
        int q = 101;
        int d = 26;
        
        int m = pat.size();
        int n = txt.size();
        int j,i;
        
        int p=0;
        int t=0;
        int h=1;
        
        for(int i=0;i<m-1;i++){
            h = (h*d)%q;
        }
        for(int i=0;i<m;i++){
            p = (d*p + pat[i])%q;
            t = (d*t + txt[i])%q;
        }
        
        for(int i=0;i<=n-m;i++){
            if(p == t){
                for(j=0;j<m;j++){
                    if(txt[i+j] != pat[j]){
                        break;
                        
                    }
                }
                if(j == m){
                    res.push_back(i+1);
                }
            }
            if(i<n-m){
                t = (d*(t - txt[i]*h) + txt[i+m])%q;
                if(t<0){
                    t += q;
                }
            }
        }
        return res;
    }
};