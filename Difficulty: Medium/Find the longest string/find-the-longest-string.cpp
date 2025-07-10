class Solution {
  public:
  
  struct TrieNode {
    bool isEndofWord;
    TrieNode* children[26];
    
    TrieNode(){
        isEndofWord = false;
        for(int i=0;i<26;i++) children[i] = NULL;
    }
  };
  
  TrieNode* root = new TrieNode();
  
  void insert(string& word){
      TrieNode* crawler = root;
      
      for(int i=0;i<word.length();i++){
          int index = word[i] - 'a';
          
          if(crawler->children[index] == NULL){
            crawler->children[index] = new TrieNode();
          }
          crawler = crawler->children[index];
      }
      crawler->isEndofWord = true;
  }
  
  bool search(string& word){
      TrieNode* crawler = root;
      for(int i=0;i<word.length();i++){
          int index = word[i] - 'a';
          crawler = crawler->children[index];
          
          if(crawler == NULL || crawler->isEndofWord == false){
              return false;
          }
      }
      return true;
  }
  
    string longestString(vector<string> &words) {
        // Code with Radheshyam (.^.)
        for(string &word : words){
            insert(word);
        }
        string result = "";
        
        for(string &word : words){
            if(search(word)){
                if(word.length() > result.length() || 
                (word.length() == result.length() && word < result)){
                    result = word;
                }
            }
        }
        return result;
    }
};