class Solution {
public:
    int maximumSwap(int num) {
        /*
        vector<int>v;
        if(num<=9){return num;}
        while(num!=0){
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        int max_num = INT_MIN;
        int max_idx = -1;
        for(int i = 1;i<v.size();i++){
             if(v[i]>=max_num ){
                max_num = v[i];
                max_idx = i;
             }
        }
        int min_element = INT_MAX;
        int min_element_idx = -1;
        for(int j = 0;j<max_idx;j++){
             if(v[j]<min_element){
                min_element = v[j];
                min_element_idx  = j;
                break;
             }
        }
        swap(v[min_element_idx],v[max_idx]);
         for(int i = 0;i<v.size();i++){cout<<v[i]<<" ";}
        int  ans = 0;
        for(int i = 0,j = v.size()-1;i<v.size()&&j>=0;i++,j--){
            ans = v[i]*pow(10,j)+ans;
        }
        return ans;
        */
        string digit =to_string( num);
       int max_num = num;
        for(int i = 0;i<digit.size();i++){
            for(int j = i+1;j<digit.size();j++){
                     swap(digit[i],digit[j]);
                    max_num=max(max_num,stoi(digit));
                    swap(digit[i],digit[j]);
            }
        }
        return max_num;
    }
};