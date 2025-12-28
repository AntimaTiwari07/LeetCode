class Solution {
public:
void fill(vector<vector<int>>& image, int sr, int sc, int color,int stColor){
   if(sr<0 || sc<0 || sr>=image.size()||sc>=image[0].size() || image[sr][sc]!=stColor )return;
   if(image[sr][sc]==stColor){
    image[sr][sc]=color;
    fill(image,sr-1,sc,color,stColor);
    fill(image,sr+1,sc,color,stColor);
    fill(image,sr,sc+1,color,stColor);
    fill(image,sr,sc-1,color,stColor);
   }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int stColor =  image[sr][sc];
        if(color==stColor)return image;
      fill(image,sr,sc,color,stColor);
      return image;
    }
};