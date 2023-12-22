#include <iostream>
#include <vector>
#include <bits\stdc++.h>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for (auto& row : image) {
        int start = 0;
        int end = row.size() - 1;

        while (start < end) {
            swap(row[start], row[end]);
            start++
            end--;
        }

     
        for (int& value : row) {
            value = 1 - value;
        }
    }

    return image;
}

int main() {
    vector<vector<int>> image1 = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> image2 = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};

    flipAndInvertImage(image1);
    flipAndInvertImage(image2);

 
    for (const auto& row : image1) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (const auto& row : image2) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
