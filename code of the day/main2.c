#include<stdio.h>
 int main()
 {
     int i,a;
     printf("Enter a size of array:");
     scanf("%d",&a);
     int p[a];
     for(i=0;i<a;i++)
     scanf("%d",&p[i]);
     printf("After print\n");
     for(i=0;i<a;i++)
     printf("%d\n",p[i]);
     return 0;
 }