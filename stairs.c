#include <stdio.h>
int main()
{
   int n,i,j,s=0,pattern=0;
   printf("No of stairs require: ");
   scanf("%d",&n);
   // No of rows of pattern
   for(i=0;i<n;i++){
       s= n-(i+1);
       for(j=0;j<s;j++){
           printf(" ");
       }
       //pattern to print
       pattern = i+1;
       for(j=0;j<pattern;j++){
           printf("01");
       }
       printf("\n");
   }
   return 0;
}
