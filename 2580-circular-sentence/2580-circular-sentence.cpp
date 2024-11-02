class Solution {
public:
    bool isCircularSentence(string sentence) {
        int cntspace = -1;
        cout<<sentence.size();
        for(int i = 0;i<sentence.size();i++){
            if(sentence[i]==' '){
                cout<<i<<endl;
                cntspace=i;
                }
                if(cntspace!=-1){
            if(sentence[cntspace-1]!=sentence[cntspace+1]){
                cout<<sentence[cntspace-1]<<endl;
                return false;
            } 
        }
        }
        if(sentence[0]!=sentence[sentence.size()-1]){
            cout<<sentence[sentence.size()-1]<<" "<<sentence[0]<<endl;
                return false;
            }
        return true;
    }
};