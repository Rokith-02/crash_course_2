#include<stdio.h>
#define TOTAL_BITS sizeof(int)*8
int main()
{
        int num=8,i,count=0;
        for(i=TOTAL_BITS-1;i>=0;i--)
        {
                if(((num>>i)&1)==0)
                count++;
                else
                break;
        }
        printf("leading zeros count is:%d\n",count);
        for(i=0,count=0;i<=TOTAL_BITS;i++)
        {
                if(((1<<i)&num)==0)
                count++;
                else
                break;
        }
        printf("trailing of zeros:%d\n",count);

}
/* 7 6 5 4 3 2 1 0
   0 0 0 0 1 0 1 0   =10
   0 0 0 0 0 0 0 0  10>>7
   0 0 0 0 0 0 0 0  10>>6
   0 0 0 0 0 0 0 0  10>>5
   0 0 0 0 0 0 0 0  10>>4
   0 0 0 0 0 0 0 1  10>>3  now we will get 1 so we get come out of loop by using break leading zeros count is 4*/
