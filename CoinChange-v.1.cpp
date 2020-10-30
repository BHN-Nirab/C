/*#include<stdio.h>

int count( int S[], int m, int n )
{

	if (n == 0)
		return 1;

	if (n < 0)
		return 0;

	if (m <=0 && n >= 1)
		return 0;

	return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}

int main()
{
	int i, j;
	int arr[] = {2, 4, 6};
	int m = sizeof(arr)/sizeof(arr[0]);
	printf("%d ", count(arr, m, 5));

	return 0;
}
*/



#include<bits/stdc++.h>

using namespace std;
// count ( array, size, ammount)
int count( int S[], int m, int n )
{
	int i, j, x, y;

	int table[n + 1][m];

	for (i = 0; i < m; i++)
		table[0][i] = 1;

	for (i = 1; i < n + 1; i++)
	{
		for (j = 0; j < m; j++)
		{
			x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0;

			y = (j >= 1) ? table[i][j - 1] : 0;

			table[i][j] = x + y;

			cout << "[" << i << "]" << "[" << j << "]" << " = " << table[i][j] << "\t";

		}
		cout << endl;
	}

	for(i=0; i<n+1; i++)
    {
        for(j=0; j<m; j++)
            cout << table[i][j] << "\t";

        cout << endl;


    }

	return table[n][m - 1];
}

int main()
{
	int arr[] = {1, 2, 3};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = 4;
	cout << count(arr, m, n) << endl;
	return 0;
}


