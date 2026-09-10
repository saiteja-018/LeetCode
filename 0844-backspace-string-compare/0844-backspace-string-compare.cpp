class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        string s1=""; 
        int count1=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='#'){
                count1++;
                continue;
            }
            if(count1>0){
                count1--;
                continue;
            }
            s1+=s[i];
        }
        int count2=0;
        string t1="";
        for(int i=m-1;i>=0;i--){
            if(t[i]=='#'){ 
                count2++;
                continue;
            }
            if(count2>0){
                count2--;
                continue;
            }
            t1+=t[i];
        }
        cout<<s1<<t1;
        return s1==t1;

    }
};