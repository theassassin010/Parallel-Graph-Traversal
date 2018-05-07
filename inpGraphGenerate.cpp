#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
	long int n, e;
	cin >> n >> e;
	vector<vector<int> > arr(n, vector<int>(n));
	int count[n];
	for (int i=0;i<n;i++)
	{
		for(int j=0; j<n; j++)
			arr[i][j] = 0;
		count[i] = 0;
	}
	srand(time(NULL));

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (count[i]>=e){
				break;
			}
			if (i==j)
				continue;
			if (arr[i][j]==0)
				arr[i][j] = rand()%2;
			if (arr[i][j]==1)
			{
				if (arr[j][i]==1)
				{
					continue;
				}
				else if (count[j]>=e)
				{
					arr[i][j] = 0;
				}
				else
				{
					arr[j][i] = 1;
					count[i]++;
					count[j]++;
				}
			}
			if (count[i]>=e){
				break;
			}
		}
	}

	cout << n << endl;
	for (int i=0;i<n;i++)
	{
		cout << count[i] << "\n";
		if (count[i]==0)
		{
			continue;
		}
		for (int j=0;j<n;j++)
		{
			if (arr[i][j] == 1)
				cout << j << " ";
		}
		cout << "\n";
	}
}