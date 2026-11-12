#include"student.h"
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void Sortthelist(struct student **head)
{
	if((*head==0)||(*head)->next==0)
	{
		printf("No records found\n");
		return;
	}
	char op;
	printf("N/n : sort with name\n");
	printf("P/p : sort with percentage\n");
	printf("enter choice: ");
	scanf(" %c",&op);
	op=tolower(op);
	int swapped;
	struct student *ptr1;
	struct student *lptr=0;
	do
	{
		swapped=0;
		ptr1=*head;
		while(ptr1->next!=lptr)
		{
			int cond=0;
			if(op=='n')
			{
				cond=(strcmp(ptr1->name,ptr1->next->name)>0);
			}
			else if (op=='p')
			{
				cond=(ptr1->percentage<ptr1->next->percentage);
			}
			else
			{
				printf("invalid choice..\n");
				return;
			}
			if(cond)
			{
				int tr=ptr1->rollno;
				ptr1->rollno==ptr1->next->rollno;
				ptr1->next->rollno=tr;
				float tp=ptr1->percentage;
				ptr1->percentage==ptr1->next->percentage;
				ptr1->next->percentage=tp;
				char tn[50];
				strcpy(tn,ptr1->name);
				strcpy(ptr1->name,ptr1->next->name);
				strcpy(ptr1->next->name,tn);
				swapped=1;
			}
			ptr1=ptr1->next;
		}
		lptr=ptr1;
	}
	while(swapped);
	printf("list sorted successfully\n");
}
