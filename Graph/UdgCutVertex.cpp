int  low[N], depth[N];
bool is_cut_vertex[N], visit[N];
vector<int> G[N];

void dfs(int now,int cur_depth){
	visit[now] = true;
	depth[now] = low[now] = cur_depth;
	int cut_son = 0;
	for (auto i: G[now]){
		if (visit[i]){// ancestor
			low[now] = min(low[now], depth[i]);
		}else{// offspring
			dfs(i, cur_depth + 1);
			cut_son += 1;
			low[now] = min(low[now], low[i]);
			if (low[i] >= depth[now])
				is_cut_vertex[now] = true;
		}
	}
	if (cur_depth == 0)is_cut_vertex[now] = (cut_son != 1);
	return;
}

bool is_2_vertex_connected(int n){
	int cut_vertex = 0;
    memset(visit, 0, sizeof(visit));
    memset(is_cut_vertex, 0, sizeof(is_cut_vertex));
	dfs(1, 0);
	for (int i = 1; i <= n; i++)
		if (is_cut_vertex[i])cut_vertex++;
	return cut_vertex == 0;
}