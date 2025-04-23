class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int size = 0;
        vector<string>st;
        for(int i = 0;i<words.size();i++){
            size+=words[i].size()+1;
            if(size-1<=maxWidth)st.push_back(words[i]);
           if(size-1>maxWidth){
             size-=words[i].size()+1;
            size-=(st.size());
            int space = maxWidth-(size);
            cout<<"space = "<<space<<endl;
            int num = st.size()-1;
            string str="";
            int count = num;
            if(num==0){
                count =1;
                num= 1;
            }
            if(space%num==0){
                 string temp="";
            for(int i = 0;i<st.size();i++){
                cout<<st[i]<<" ";
                  temp = "";
                for(int k = 1;count>0 && k<=space/num;k++){
                    temp+=' ';
                }
                count--;
                str = str + st[i]+temp;
            }
            }
            else{
                int rem = space%(num);
                int x = 1;
                 for(int i = 0;i<st.size();i++){
                cout<<st[i]<<" ";
                string temp="";
                for(int k = 1;count>0 && k<=space/num + x;k++){
                    temp+=' ';
                }
                count--;
                rem--;
                if(x<=rem){
                    x = 1;
                }else x = 0;
                str = str + st[i]+temp;
            }
            }
            cout<<endl;
            ans.push_back(str);
            st = {};
            size = 0;
            i--;
           }    
            }
            string str = "";
            cout<<size<<endl;
             int space = maxWidth-(size-(st.size()))-(st.size()-1);
            for(int i = 0;i<st.size()-1;i++){
            cout<<st[i]<<" ";
            str+=(st[i]+' ');
            }
            str+=st[st.size()-1];
            string temp="";
            for(int k = 1;k<=space;k++){
                temp+=' ';
            }
            ans.push_back(str+temp);
            
        return ans;
    }
};