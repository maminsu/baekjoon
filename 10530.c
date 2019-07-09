#include<stdio.h>
int main()
{
 int i,n;
 int x, y;
 int s[10000];
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
  scanf("%d %d", &x, &y);
  s[i] = x + y;
 }
 for (i = 0; i < n; i++)
 {
  printf("%d\n", s[i]);
 }
  return 0;
}