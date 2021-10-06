#include <stdio.h>
#include <stdlib.h>
float mat(int z[], int n){
float r=0;
for (int i=0;i<n;i++)
{
r+=z[i];
}

  r/=n;

  return r;}
  int main()
{
  int n;
  scanf("%d",&n);
  int marks[n];
  for (int i=0;i<n;i++)
  {
  scanf("%d",&marks[i])
  }
  float x=mat(marks[i],n);
    if (x>=4.6 )printf("Вы поступили");
    else printf("Вы не поступили");
      return 0;
}
