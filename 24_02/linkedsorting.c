#include<stdio.h>
#include<stdlib.h>
typedef struct ST
{
        int roll;
        struct ST*next;
}st;
void print(st*);
void add_end(st**);
void sorting(st*);
int count(st*);
int main()
{
        st*hptr=0;
        char op;
        do
        {
                add_end(&hptr);
                printf("do you want to add another node\n");
                scanf(" %c",&op);
        }while((op=='y')||(op=='Y'));
        print(hptr);
        printf("\n");
        //int c=count(hptr);
        //printf("count:%d\n",c);
        //sorting(hptr);
        //print(hptr);
}
int count(st*ptr)
{
        int cnt=0;
        while(ptr!=0)
        {
                cnt++;
                ptr=ptr->next;
        }
        return cnt;
}
void sorting(st*ptr)
{
        int tem;
        st*temp=ptr;
        st*index=NULL;
        if(ptr==NULL)
        {
                return;
        }
        else
        {
        while(temp!=NULL)
        {
                index=temp->next;
                while(index!=NULL)
                {
                        if(temp->roll > index->roll) {
                                tem = temp->roll;
                                temp->roll = index->roll;
                                index->roll = tem;
                        }
                         index = index->next;
                }
                temp=temp->next;
        }
        }
}
void print(st*ptr)
{
        st *temp=ptr;
        while(temp->next!=ptr)
        {
        printf("%d",temp->roll);
        temp=temp->next;
        }
	printf("%d",temp->roll);
}
void add_end(st**ptr)
{
	st*temp=(st*)malloc(sizeof(st));
        scanf("%d",&temp->roll);
        if(*ptr==NULL)
        {
	*ptr=temp;
        temp->next=*ptr;
    	}
        else
        {
        st*last=*ptr;
        while(last->next!=*ptr)
        last=last->next;
        temp->next=last->next;
        last->next=temp;
        }
}
