#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char ** argv)
{
	string s ="tucson";
	string t = "houston";
	int n = s.length()+1;
	int m = t.length()+1;
	int mat[n][m];
	for (int i =0 ; i <n; i++)
		for (int j =0 ; j <m; j++)
			mat[i][j] =0;	
	for (int i =1 ; i <n; i++)
	{
		for (int j =1 ; j <m; j++)
		{
			//cout <<s[i] <<t[j] <<endl;
			if (s[i-1] == t[j-1])
			{
			//	cout << "equal"<<endl;
				mat[i][j] = mat[i-1][j-1] +1;
			}
			else
				{
					mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
				}
			cout << mat[i][j] << ",";
		}
		cout <<endl;
	}
	cout << "logest Subsequence is :" << mat[n-1][m-1]<<endl;
}