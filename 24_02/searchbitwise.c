#include<stdio.h>
int main()
{
        int a[5]={1,2,3,4,5},ch,i;
        printf("enter the search element\n");
        scanf("%d",&ch);
        for(i=0;i<5;i++)
        {
                if((a[i]^ch)==0)
                {
                        printf("element fount\n");
                        return 0;
                }
        }
        printf("element not found\n");
}
