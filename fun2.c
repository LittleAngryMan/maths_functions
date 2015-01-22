#include <stdio.h>
int sqr (int x)
{
	return x*x;
}

int cube (int x)
{
	return sqr(x)*x;
}

int main()
{
    int k;
    for (k=0; k<33; k++)
        printf("cube(%i) = %3i\n",k, cube(k));
    return 0;
}
