class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       for (int kk = 0; kk < image.size(); kk++) {
                std::reverse(image[kk].begin(), image[kk].end());
                for (int ii = 0; ii < image[kk].size(); ii++) { image[kk][ii] = (image[kk][ii] == 0 ? 1 : 0); }
                }
                   
            return image;   
    }
};