#include <bits/stdc++.h>
using namespace std;


long long int  limit = 1e9 + 7;

long long int  Power(long long int  x, long long int  y)
{
	long long int  res = 1;
	x = x;
	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % limit;

		y = y >> 1;
		x = (x * x) % limit;
	}
	return res;
}

int main()
{
	

	int t;
	cin >> t;
	while (t--)
	{
		long long int  N, M;
		cin >> N >> M;
        
		long long int  result = Power(2, N + M);
		if ((2 * N + M) % 3 == 0)
		{
			if ((N + M) % 2 != 0)
			{
				result = (result - 2) % limit;
			}
			else
			{
				result = (result + 2) % limit;
				
			}
		}
		else
		{
			if ((N + M) % 2 != 0)
			{
				result = (result + 1) % limit;
			}
			else
			{
				result = (result -1) % limit;
				
			}
		}
		result = (((result * (Power(3, limit-2))) % limit - 1) % limit)+3*limit;
		
		cout << (result) % limit << endl;
		
	}
	return 0 ;
}
