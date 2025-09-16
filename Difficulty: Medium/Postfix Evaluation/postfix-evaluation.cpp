class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
         // Code with Radheshyam (.^.)
        stack<int> st;
        
        for (string token : arr) {
            if (isOperator(token)) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int result = applyOperation(a, b, token);
                st.push(result);
            } else {
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }

private:
    bool isOperator(string s) {
        return s == "+" || s == "-" || s == "*" || s == "/" || s == "^";
    }

    int applyOperation(int a, int b, string op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        if (op == "/") {
            if (a * b < 0 && a % b != 0) return (a / b) - 1;
            else return a / b;
        }
        if (op == "^") return pow(a, b);
        return 0; 
    }
};