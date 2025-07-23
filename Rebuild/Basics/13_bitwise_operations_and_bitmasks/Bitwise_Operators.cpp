#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.
int max(int a, int b)
{
  return a >= b ? a : b;
}
void calculate_the_maximum(int n, int k)
{
  int mand = 0;
  int mor = 0;
  int mxor = 0;
  for (int i = 0; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      (i &j) < k ? mand = max(mand, i & j) : mand;
      (i | j) < k ? mor = max(mor, i | j) : mor;
      (i ^ j) < k ? mxor = max(mxor, i ^ j) : mxor;
    }
  }
  printf("%d\n", mand);
  printf("%d\n", mor);
  printf("%d\n", mxor);
}

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
