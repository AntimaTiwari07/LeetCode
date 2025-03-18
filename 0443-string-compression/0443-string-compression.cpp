class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
          char curr_char = chars[0];
             int count = 0;
        for(int i = 0;i<chars.size();i++){
            if(chars[i]==curr_char){
                count+=1;
            }
            else{
                chars[idx]=curr_char;
                  idx+=1;
                if(count>1){
                int j = 0;
                string cnt = to_string(count);
                while(j<cnt.size()){
                     chars[idx]=cnt[j];
                     j++;
                     idx+=1;
                }
                }
                count = 1;
                curr_char = chars[i];
            }
            cout<<curr_char<<" "<<count<<endl;
        }
        chars[idx] = curr_char;
        idx+=1;
          if(count>1){
                int j = 0;
                string cnt = to_string(count);
                while(j<cnt.size()){
                     chars[idx]=cnt[j];
                     j++;
                     idx+=1;
                }
                }
        return idx;
    }
};