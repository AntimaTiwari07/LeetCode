class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j && i<s.size()/2 ){
            while(j>=0 && (s[j]!='A' && s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U' && s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' ))j--;
            while(i<s.size() && (s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' &&s[i]!='U' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' &&s[i]!='u' ))i++;
             if(i<j)swap(s[i],s[j]);
             j--;
             i++;

        }
        return s;
    }
};