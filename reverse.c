#include<stdio.h>
int main()
{
  int a;
  printf("How many numbers:");
  scanf("%d",&a);
  int c[a];
  for(int i=0;i<a;i++)
  {
  printf("Enter the number%d:",i+1);
  scanf("%d",&c[i]);
  }
  for(int i=(a-1);i>=0;i--)
  {
    printf("%d\n",c[i]);
  }
  return 0;
}
