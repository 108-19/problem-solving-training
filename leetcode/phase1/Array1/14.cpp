class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n=image.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            int temp = image[i][j];
            image[i][j] = image[i][n - 1 - j];
            image[i][n - 1 - j] = temp;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            image[i][j] = 1 - image[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << "[";
        for (int j = 0; j < n; ++j) {
            cout << image[i][j];
            if (j != n - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != n - 1) {
            cout << ",";
        }
        cout << endl;
    }

    return image;
}

    
};
