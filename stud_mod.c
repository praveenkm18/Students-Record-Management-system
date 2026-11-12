#include<stdio.h>
#include<ctype.h>
#include"student.h"
#include<string.h>
void Modifyarecord(struct student *head)
{
	if(head==0)
	{
		printf("No records found:\n");
		return;
	}
	char op;
	printf("\nModify Section:\nR/r : Roll number\nN/n : Name\nP/p :Percentage\nEnetr op: ");
	scanf(" %c",&op);
	op=tolower(op);
	int tr=-1;
	struct student *curr=head;
	if(op=='r')
	{
		printf("enter rollno: ");
		if(scanf("%d",&tr)!=1)
			return;
	}
	else if (op=='n'||op=='p')
	{
		char tn[50];
		float tp;
		int m=0;
		if(op=='n')
		{
			printf("enter name: ");
			scanf(" %[^\n]",tn);
		}
		else 
		{
			printf("enter percentge: ");
			if(scanf("%f",&tp)!=1)
				return ;
		}
		curr=head;
		while(curr!=0)
		{
		if((op='n'&&strcmp(curr->name,tn)==0)||(op=='p'&&(curr->percentage-tp<0.01)&&(tp-curr->percentage<0.01)))
			{
				if(m==0)
				{
					printf("\nMatching Records Found:\n");
				}
				printf("Rollno:%d|Name:%s|pct:%.2f\n",curr->rollno,curr->name,curr->percentage);
				m++;
			}
			curr=curr->next;
		}
		if(m==0)
		{
			printf("No matches found..\n");
			return;
		}
		printf("\nEnter the Rollno of the student you want to modify: ");

		scanf("%d",&tr);
	}
	else {
		printf("Invalid op..\n");
		return;
	}
	curr=head;
	while(curr!=0&&curr->rollno!=tr)
	{
		curr=curr->next;
	}
	if(curr==0)
	{
		printf("record not found.\n");
		return;
	}
	printf("Enter new name: ");
	scanf(" %[^\n]",curr->name);
	while(1)
		{
	printf("enter new percentage: ");
	//scanf("%f",&curr->percentage);
			if(scanf("%f",&curr->percentage)==1&&curr->percentage>=0.0f&&curr->percentage<=100.0f)
	{		
	break;
		}
scanf("%*s");
printf("invalid percentage! try again.\n");
	}
	printf("Record updated successfully..\n");
}

