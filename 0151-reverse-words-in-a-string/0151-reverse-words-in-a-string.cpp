class Solution {
public:
    string reverseWords(string s) {
        string word="";
        vector<string> words;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        string res="";
        reverse(words.begin(),words.end());
        for(auto ch:words){
            res=res+ch+" ";
        }
        res.pop_back();
        return res;
        
    }
};