class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ws = p.length();
     vector<int>count1(26,0),count2(26,0); 
     vector<int>result;
     for(char c: p){
        count1[c-'a']++;
     } 
     for(int i=0;i<s.length();i++){
        count2[s[i]-'a']++;
        if(i>=p.length()) count2[s[i-p.length()]-'a']--;
        if(count1 == count2)
        result.push_back(i-p.length() +1);
     }
     return result;
    }
};
