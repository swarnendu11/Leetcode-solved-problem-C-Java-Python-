class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n,0));
        vector<int> directions = {-1, 0, 1};

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int total = 0, count = 0;
                
                for (int dx : directions) {
                    for (int dy : directions) {
                        int ni = i + dx;
                        int nj = j + dy;
                        if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                            total += img[ni][nj];
                            count++;

                        }
                    }        
                }

                result[i][j] = total / count;
        }
    }
     
      return result;
    }
};

