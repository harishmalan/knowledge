Heap

swap the root node with the node in the bottom
Sink(A,K):
	N=Length(A)
	while 2*k <= N
		smallest = 2*K 
		if A[2*k] < A[2*k+1]
			smallest = 2*k+1
		if A[K] < smallest : break
		swap(A[K], A[smallest])
		k=smallest

extract_min(A,K):
	N= length(A)
	min = A[1]
	A[1] = A[N]
	sink(A,1)
	return min

swim(A,k)
	while K>1 and A[K/2] < A[k]:
		swap(A[k], A[k/2])
		K = K/2

insert(A,k,val)
	N=Length(A)
	A[N+1] = val
	swim(A,N+1)

	