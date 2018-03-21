Idea: Choose an elemnent at random, patition the array around this element. Recursively sort the left and right side

quickSort(A):
	quickSort(A, 0, len(A)-1)

quickSort(A, l0, hi)
	if(hi >=  lo) return 
	pivot_location <- partion(A, lo, hi)
	quickSort(A, lo, Pivot_location-1)
	quickSort(A, Pivot_location=1, hi)

partion(A, lo, hi):
	pivot_location <- random (lo, hi)
	swap(A, pivot_locaton, hi)
	pivot = A[hi]
	pivot_index = lo
	for k=lo to Hi -1
		if a[k] <= pivot
			swap( A[k], pivot)
			pivot_index++
	swap(A[pivot_index], pivot)
	return pivot_index
