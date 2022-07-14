#include <stdio.h>
int main()
{
	int n = 98;
	int *p = &n;
	
	int i = sizeof(*p);
		
	p = 402;
	
	printf("%d", n);

	int arr[5];
	int j = sizeof(arr);

	printf("\n%d\n%d", i, j);
	return 0;
}
