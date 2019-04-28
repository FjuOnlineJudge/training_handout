int  low[N], depth[N];
bool visit[N];
vector<int> G[N];
vector<pair<int,int>> my_cut_edge;

void dfs(int now,int cur_depth, int parent){
	visit[now] = true;
	depth[now] = low[now] = cur_depth;
	int cut_son = 0;
	for (auto i: G[now]){
		if (visit[i]){// ancestor
			if (i != parent && depth[i] < low[now])
				low[now] = depth[i];
		}
		else{// offspring
			dfs(i, cur_depth + 1, now);
			cut_son += 1;
			if (low[i] < low[now])
				low[now] = low[i];
			if (low[i] > depth[now])
				my_cut_edge.push_bach({now, i});
		}
	}
	return;
}

bool is_2_edge_connected(int n){
	int cut_edge = 0;
    memset(visit, 0, sizeof(visit));
	dfs(1, 0, -1);
	return my_cut_edge.size() == 0;
}