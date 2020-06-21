Longest Comman Suquence 

LCS_legnth(s,t)

m <- s.length+1
n <- t.length+1
m = matrix m*n
for i <-0 to m
M[i,0] <- 0
for j<-0  to n
M[0,j] <- 0

for i<-1 to m
	for j<-1 to n
	  if s_i = s_j
	    M[i,j] <- M[i-1,j-1]+1
	  else:
	  	M[i,j]<- Max {M[i-1,j], M[i,j-1]}

	return M(m,n)