#include <bits/stdc++.h>
using namespace std;

bool isSafe(int newx, int newy, int srcx, int srcy,int rows , int cols, vector<vector<int>> &visited, vector<vector<int>> &maze)
{
    return (newx >= 0 && newx < rows &&
            newy >= 0 && newy < cols &&
            maze[newx][newy] == 1 &&
            visited[newx][newy] == 0);
}

void solve(vector<vector<int>> &maze, vector<string> &ans, int rows, int cols, string path, int srcx, int srcy, vector<vector<int>> visited)
{
    // base case 

    if(srcx == rows - 1 && srcy == cols - 1){
        ans.push_back(path);
        return;
    }

    visited[srcx][srcy] = 1;

    // 4 choice 

    // down case

    int newx = srcx + 1;
    int newy = srcy;
    if(isSafe(newx , newy ,srcx , srcy , rows , cols , visited , maze)){
        path.push_back('D');
        solve(maze, ans, rows, cols, path, newx, newy, visited);
        path.pop_back();
    }

    // left case

    newx = srcx;
    newy = srcy - 1;
    if (isSafe(newx, newy, srcx, srcy, rows, cols, visited, maze))
    {
        path.push_back('L');
        solve(maze, ans, rows, cols, path, newx, newy, visited);
        path.pop_back();
    }

    // right case 

    newx = srcx;
    newy = srcy + 1;
    if (isSafe(newx, newy, srcx, srcy, rows, cols, visited, maze))
    {
        path.push_back('R');
        solve(maze, ans, rows, cols, path, newx, newy, visited);
        path.pop_back();
    }

    // up case 

    newx = srcx - 1;
    newy = srcy;
    if (isSafe(newx, newy, srcx, srcy, rows, cols, visited, maze))
    {
        path.push_back('U');
        solve(maze, ans, rows, cols, path, newx, newy, visited);
        path.pop_back();
    }


    visited[srcx][srcy] = 0;
}

vector<string> ratInMaze(vector<vector<int>> &maze , int rows , int cols)
{
    vector<string> ans;
    int srcx = 0;
    int srcy = 0;
    string path = "";
    vector<vector<int>> visited = maze;

    if(maze[0][0] == 0){
        return ans;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            visited[i][j] = 0;
        }
    }

    solve(maze , ans , rows ,cols , path , srcx , srcy , visited);

    sort(ans.begin(), ans.end());
    return ans;
}



int main(){
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> maze(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> maze[i][j];
        }
    }

    vector<string> ans = ratInMaze(maze , rows , cols);

    for(auto i: ans){
        cout << i << " ";
    }
}