class Solution {
public:
bool dfs(int node , int color , vector<vector<int>>& graph , vector<int>& colours){
    colours[node] = color;
    for(auto it : graph[node]){
        if(colours[it]==-1){
           if(dfs(it , !color , graph , colours)==false) return false;
        }
        else if(colours[it]==color){
             return false;
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int  n =graph.size();
        //we will do chk if the graph is bipartite using the dfs
        vector<int> colours(n,-1);
        for(int i = 0 ; i<n ;i++){
            if(colours[i]==-1){
                if(dfs(i , 0 , graph , colours)==false) return false;
            }
        } 
return true;
    }
};