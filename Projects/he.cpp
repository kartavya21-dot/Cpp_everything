#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	bool door[10] = {0};
	
	for( int i = 1 ; i <=10;i++)
	{
		for(int j = 1 ; j <= 10 ; j++)
		{
			door[i*j] = ~ door[i*j];
		}
	}
	for(int n = 0 ; n < 10 ; n++)
	{
		cout<<door[n]<<" ";
	}
		
	return 0;
}