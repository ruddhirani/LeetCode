class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int st=0;
            int end=image[i].size()-1;
            while(st<=end){
                int temp=(image[i][end]^1);
                image[i][end]=(image[i][st]^1);
                image[i][st]=temp;
                st++;
                end--;
            }
        }
        return image;
    }
};