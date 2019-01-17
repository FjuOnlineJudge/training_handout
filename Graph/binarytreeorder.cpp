void dfs(int v){
    // cout<<v<<'\n'; preorder
    if(v.lc)dfs(v.lc);
    // cout<<v<<'\n'; inorder
    if(v.rc)dfs(v.rc);
    // cout<<v<<'\n'; postorder
}