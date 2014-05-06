#include "Algorithm.h"

#include <cstdio>

namespace algorithm
{
	int fibonacci(int n) 
	{
		if( n<=2 ) return 1;
		int a = 1, b = 1;
		for(int i = 3; i <= n; ++i)
		{
			int tmp = b;
			b = a + b;
			a = tmp;
		}

		return b;
	}

	int findDupCharCount(const char* str)
	{
		int count = 0;
		for(int i = 0; i < strlen(str); ++i)
		{
			if(str[i] == str[i + 1] && i < strlen(str) - 2 && str[i] != str[i + 2])
				count++;
		}

		return count;
	}

	int findKthMaxElement(int* arr, int n, int k)
	{

	}

	int MaxSubsequenceSum(const int A[], int N)
	{
		int thisSum, maxSum, j;
		thisSum = maxSum = 0;
		for(j = 0; j < N; j++)
		{
			thisSum += A[j];
			if(thisSum > maxSum)
				maxSum = thisSum;
			else if(thisSum < 0)
				thisSum = 0;
		}

		return maxSum;
	}

	int BinarySearch(const int A[], int N, int x)
	{
		int low, mid, high;
		low = 0; high = N - 1;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if(A[mid] < x)
				low = mid + 1;
			else if(A[mid] > x)
				high = mid - 1;
			else
				return mid;
		}

		return -1;
	}

	unsigned int Gcd(unsigned int M, unsigned int N)
	{
		unsigned int Rem;
		while(N > 0)
		{
			Rem = M % N;
			M = N;
			N = Rem;
		}

		return M;
	}

	long int Pow(long int X, unsigned int N)
	{
		if( N ==0 ) return 1;
		if(N == 1) return N;
		if(N%2 == 0)
			return Pow(X*X, N/2);
		else
			return Pow(X*X, N/2) * X;
	}
}