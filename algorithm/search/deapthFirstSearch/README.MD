DFS psedocode 


DFS-VISIT(v, G)
	\\adj(v) is the list of vertics adjacent to v
	v.color = grey
	for each u in adj(v):
		if u.color == white:
			DFS-VISIT(V)
	v.color = black


DFS(G)
	//V(G) is the  list of vertices in a graphs G
	for each u in V(G):
		if u.color = white
			DFS-VISIT(u,G)