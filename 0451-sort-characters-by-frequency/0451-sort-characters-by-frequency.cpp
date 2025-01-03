class Solution {
public:
    string frequencySort(string s) {
        //unordered_map<char,int>mp;
        /*
        int count[256]={0};
        for(int i = 0;i<s.size();i++){
         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z' )||(s[i]>='0'&&s[i]<='9'))count[s[i]-'0']++;
        }
        string newstr = "";
        int k = 0;
        while(k<s.size()){
            int idx = -1;
            int maxi = INT_MIN;
        for(int i = 0;i<256;i++){
            if(count[i]>maxi){
                maxi = count[i];
                idx = i;
            }
        }
        for(int i = 1;i<=maxi;i++){  
            newstr+=(char)(idx+'0');
        }
        count[idx]=0;
        k++;
        }
        return newstr;
        */
        //my way to solve it//
        /*
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            q.push(i.second);
        }
        int k = 0;
        string newstr="";
        while(k<s.size()){
            int maxi = q.top();
            char ele = mp[maxi];
            for(int i = 1;i<=maxi;i++){
                newstr+=ele;
            }
            mp[ele]=0;
            k++;
        }
        return newstr;
        */


        //use of priority queue
        typedef pair<char,int>p;
        //to sort heap acc to frequency of char
        struct lambda{
       bool operator()(p&p1,p&p2){
        return p1.second<p2.second;
       }
        };

    priority_queue<p,vector<p>,lambda>pq;

    unordered_map<char,int>mp;
    for(char &ch:s){
        mp[ch]++;
    }
    for(auto i:mp){
        pq.push({i.first,i.second});
    }
    string result = "";
    while(!pq.empty()){
        p temp = pq.top();
        pq.pop();
        result+=string(temp.second,temp.first);
    }
    return result;
    }
};