Insertion Sort arr :
for i <- 1 to length arr:
	j <- i
	while (j > 0 and A[j-1] > A[j]):
		swap A[j] and A[j-1]
		j= j-1

T(n) = 2^n -1