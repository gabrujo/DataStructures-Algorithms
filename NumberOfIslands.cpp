class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        //I will use Breadth-First Search (BFS) graph search algorithm
        //In BFS, node A visits each of A's neighbors before visiting any of their neighbors.
        if (grid.empty() || grid.size()==0){ //error checking, to avoid weird edge cases
            return 0;
        }
          
        int numIslands=0;
        
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[i].size();j++){
                if (grid[i][j]=='1'){ // 1 and 0 here are chars vector<vector<char>>
                    numIslands += dfs(grid, i, j); //bfs is a help function to help us not to overcount the number of islands.
                }         
            }
        }
        return numIslands;      
    }
private:
    int dfs (vector<vector<char>>& grid, int i, int j){
        
      
        if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || grid[i][j] == '0') {
            return 0; // fail all the conditions for validity of graph   
        }     
        
        grid[i][j]= '0';
        dfs (grid, i+1, j);
        dfs (grid, i-1, j);
        dfs (grid, i, j+1);
        dfs (grid, i, j-1);
        return 1;
    }
};
