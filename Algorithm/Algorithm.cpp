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
}