Dijkstra's Algorithum

dijlstra(G, w, s)
S = {s}
d(s) = 0
for all u in G.out-neighbor(s):
	d(u) = w(s, u)
for all u !=s and u not in G.out-negihbor(s):
	d(u) = infinity
while S != G.V:
	u = argmin d(v) over all v in G.V-S
	add u to S
	for each v in G.adj(u):
		d(v) = min(d(v), d(u) + w(u, v))
//this maintian the pooperty that d(W) is length of s->v path going only though vertices in S
