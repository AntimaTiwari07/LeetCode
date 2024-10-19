class Solution {
public:
string kthbit(int n,string output){
    //base case
    if(n==0){
        return output;
    }
    int i = 0;
    string temp = "";
    temp = output;
    while(i<temp.size()){
        if(temp[i]=='1'){
            temp[i]='0';
        }
        else temp[i]='1';
        i++;
    }
    string revstring = temp;
    reverse(revstring.begin(),revstring.end());

    output =  output+"1"+revstring;
    return kthbit(n-1,output);
}
    char findKthBit(int n, int k) {
      string output= kthbit(n,"0");
       return output[k-1];
    }
};