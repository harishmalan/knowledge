Binary Static Search Tree .
BST

over all runtime O(n^3)

Optimal Static BSTs: Recuurence

T(i,j) = Min i<l<j {T(i,l-1)+ T(l+1, j) + sum j to i Pm}


optimal_bst(keys, freq):
	for size =1 to n: ( all possible sizes of contigous sets)
		for i =1 to n-size -1 : ( all possible starting points)
 			J <- i+ size -1
 			T[i,j] <-max_value
 			sum_ij = sum(freq, i, j)
 			for l = i to j:
 				curr <- T[i,j]
 					T[i,j] <- curr
 	return T[1,n]