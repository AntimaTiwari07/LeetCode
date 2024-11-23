class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int col = box[0].size();
        int row = box.size();
        for(int i = 0;i<row;i++){
            for(int j = col-1;j>=0;j--){
                    if(box[i][j]=='#'){
                         int k = j+1;
                        while((k < col && box[i][k] == '.')){
                               k++;
                        }
                        swap(box[i][j],box[i][k-1]);
                    }
            }
        }
         vector<vector<char>>rotetedbox(col,vector<char>(row));
         int k = 0;
         for(int i = row-1,k = 0;row>=0 && k<rotetedbox[0].size();i--,k++){
            for(int j = 0;j<col;j++){
                   rotetedbox[j][k] = box[i][j];
            }
         }
         for(int i = 0;i<rotetedbox.size();i++){
            for(int j = 0;j<rotetedbox[0].size();j++){
                cout<<rotetedbox[i][j]<<" ";
            }
            cout<<endl;
         }
         return rotetedbox;
    }
};