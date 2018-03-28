BFS (G,a)
	Q= empty queue
	push(Q,s)
	s.color = gray
	while not empty(Q):
		u=pop(Q)
		for each v in G.adj(u)
			if v.color = white
				c.color = grey
				push(Q,v)
		u.color = black