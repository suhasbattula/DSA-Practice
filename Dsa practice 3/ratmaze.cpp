#include <bits/stdc++.h>
using namespace std;

string directions = "DLRU";
int rowChange[4] = { 1, 0, 0, -1 };
int colChange[4] = { 0, -1, 1, 0 };

bool isValidCell(int row, int col, int size, vector<vector<int>>& grid) {
    return row >= 0 && col >= 0 && row < size && col < size && grid[row][col];
}

void searchPaths(int row, int col, vector<vector<int>>& grid, int size, vector<string>& paths, string& path) {
    if (row == size - 1 && col == size - 1) {
        paths.push_back(path);
        return;
    }
    grid[row][col] = 0;

    for (int i = 0; i < 4; i++) {
        int nextRow = row + rowChange[i];
        int nextCol = col + colChange[i];

        if (isValidCell(nextRow, nextCol, size, grid)) {
            path += directions[i];
            searchPaths(nextRow, nextCol, grid, size, paths, path);
            path.pop_back();
        }
    }
    grid[row][col] = 1;
}

int main() {
    vector<vector<int>> grid = { { 1, 0, 0, 0 },
                                 { 1, 1, 0, 1 },
                                 { 1, 1, 0, 0 },
                                 { 0, 1, 1, 1 } };

    int size = grid.size();
    vector<string> paths;
    string path = "";

    if (grid[0][0] != 0 && grid[size - 1][size - 1] != 0) {
        searchPaths(0, 0, grid, size, paths, path);
    }

    if (paths.empty())
        cout << -1;
    else
        for (const auto& p : paths)
            cout << p << " ";
    cout << endl;

    return 0;
}
