class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /*
        int rowi = 0;
        int rowf = 8-rowi;
        int coli=0;
        int colf = 8-coli;
        while(rowi<=rowf && coli<=colf){
            //to found and count element in row
            int countrowi[10] = {0};
            int countrowf[10] = {0};
        for(int i = coli;i<=colf;i++){
            if((board[rowi][i]<48)) continue;   
            else{
               countrowi[board[rowi][i] -'0']++; 
            }   
        }
            //to find comman in final row
            for(int i = coli;i<=colf;i++){
            if((board[rowf][i]<48)) continue;   
            else{
               countrowf[board[rowf][i] -'0']++; 
            }   
        }
             //to found and count element in col
            int countcoli[10] = {0};
            int countcolf[10] = {0};
        for(int i = rowi;i<=rowf;i++){
            if((board[i][coli]<48)) continue;   
            else{
               countcoli[board[i][coli] -'0']++; 
            }   
        }
            //to find comman in final row
            for(int i = rowi;i<=rowf;i++){
            if((board[i][colf]<48)) continue;   
            else{
               countcolf[board[i][colf] -'0']++; 
            }   
        }
        
            //check duplicate in row
            for(int i = 0;i<10;i++){
                if(countrowi[i] == 2){
                         valid = false;
                    break;
                }
               else if(countrowf[i]==2){
                    valid = false;
                    break;
                }
                else if(countcoli[i]==2){
                  valid = false;
                    break;
                }
               else if(countcolf[i]==2){
                    valid =false;
                    break;
                }
            }
        rowi++;
            coli++;
        }
        */
        int countr[10]={0};
        int countc[10]={0};
        int x = 0;//row & col
        while(x<9){
    //count row
            for(int i = 0;i<9;i++){
                if(board[x][i]<47) continue;
               else  countr[board[x][i]-'0']++;
            }
              for(int j = 0;j<10;j++){
            if(countr[j]>1){
                return false;
            }else
                  countr[j]=0;
            }
     //count col;
             for(int i = 0;i<9;i++){
                if(board[i][x]=='.') continue;
               else  countc[board[i][x]-'0']++;
             }

             for(int j = 0;j<10;j++){
            if(countc[j]>1){
                return false;
            }else
                 countc[j]=0;
             }
            x++;
        }
    //check grid
    std:: unordered_set<char>seen;
    for(int p = 0;p<9;p+=3){
        for(int k = 0;k<9;k+=3){
            for(int i = p;i<p+3;i++){
               for(int j = k;j<k+3;j++){
                  if(board[i][j] != '.' && seen.find(board[i][j])!=seen.end()){
                    return false;
                  }
                  else seen.insert(board[i][j]);
               }
            }
            seen.erase(seen.begin(),seen.end());
        }
    }
    return true;     
    }
};