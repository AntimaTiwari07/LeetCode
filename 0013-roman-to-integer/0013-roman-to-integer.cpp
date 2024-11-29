class Solution {
public:
    int romanToInt(string s) {
        vector<int>v;
       for(int i = 0;i<s.size();i++){
       switch(s[i]){
        case 'I' : v.push_back(1);
        break;
        case 'V' :  v.push_back(5);
        break;
        case 'X'  : v.push_back(10);
        break;
        case 'L' :  v.push_back(50);
        break;
        case 'C' :  v.push_back(100);
        break;
        case 'D'  : v.push_back(500);
        break;
        case 'M'  : v.push_back(1000);
        break;
       
        default :  cout<<"erroe"; 
       }
       }
       int sum = 0;
       int i = 0;
       while(i<v.size()){
        if( i<v.size()-1 && v[i]<v[i+1]){
            sum+=v[i+1]-v[i];
            i+=2;
        }
        else {
            sum+=v[i];
            i++;
        }
       }
       return sum;
    }
};