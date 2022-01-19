#include <stdio.h>
int main()
{
   int i,marks [6];
   printf("enter six subject marks  ");
   
   for (i=0;i<6;i++)
   {
      scanf("%d",&marks[i]);
   }
   for(i=0;i<6;i++)
   {
       printf("subject %d marks : %d\n",i,marks[i]);
   }
   return 0;
}
   
  