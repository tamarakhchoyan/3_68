#include <iostream>
int main()
{
	const int n = 5;
	int i, a[n];
	for (i = 0; i < n; ++i)
		std::cin >> a[i];
	for(i=0;i<n;++i)
	{
		a[i] >> 4;
		std::cout << a[i];
	}
	return 0;
}