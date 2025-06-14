class Solution {
public:
    int minMaxDifference(int num) {
       string s="";
        while(num!=0){
            s+=((char)(num%10)+'0');
            num/=10;
        }
        reverse(s.begin(),s.end());
        int i = 0;
        while(s[i]=='9'){
            i++;
        }
        char tar = s[i];
        char temp = s[0];
        string maxi = s;
        string mini = s;
        for(int i = 0;i<maxi.size();i++){
            if(maxi[i]==tar)maxi[i]='9';
            if(mini[i]==temp)mini[i]='0';
        }
        
        string diff = "";
        for(int i = 0;i<maxi.size();i++){
            diff+=(char)((maxi[i]-'0')-(mini[i]-'0'))+'0';
        }
       
        int ans = 0;
        for(int i = 0;i<diff.size();i++){
             ans = ans*10+(int)(diff[i]-'0');
        }
        return ans;
    }
};