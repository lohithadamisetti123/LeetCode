

void dfs(int** stones, int stonesSize, bool* visited, int i) {
    visited[i] = true;
    for (int j = 0; j < stonesSize; j++) {
        if (!visited[j] && (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])) {
            dfs(stones, stonesSize, visited, j);
        }
    }
}

int removeStones(int** stones, int stonesSize, int* stonesColSize) {
    bool* visited = (bool*)calloc(stonesSize, sizeof(bool));
    int components = 0;
    
    for (int i = 0; i < stonesSize; i++) {
        if (!visited[i]) {
            dfs(stones, stonesSize, visited, i);
            components++;
        }
    }
    
    free(visited);
    return stonesSize - components;
}
