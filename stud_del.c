#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include"student.h"
void Deletearecord(struct student **head)
{
	if(*head==0)
	{
		printf("No records found:\n");
		return ;
	}
	char op;
	printf("R/r : enter rollno to delete\n");
	printf("N/n : enter name to delete\n");
	printf("enter choice: ");
	scanf(" %c",&op);
	op=tolower(op);
	int tr=-1;
	if(op=='r')
	{
		printf("enter rollno to delete: ");
		if(scanf("%d",&tr)!=1)
				return;
				}
				else if (op=='n')
				{
				char tn[50];
				printf("enter name to delete: ");
				scanf(" %[^\n]", tn);

				int mc=0;
				struct student *curr=*head;
				while(curr!=0)
				{
				if(strcmp(curr->name,tn)==0)
				{
				mc++;
				if(mc==1)
				{
				printf("\n%-10s %-15s %-10s\n","Rollno","Name","Percentage");
				}
				printf("%-10d %-15s %-10.2f\n",curr->rollno,curr->name,curr->percentage);
				}
				curr=curr->next;
				}
				if(mc==0)
				{
					printf("no records found matching name:%s\n",tn);
					return;
				}
				printf("enter the spicific rollno to delete from above: ");
				if(scanf("%d",&tr)!=1)
					return;

				}
	else
	{
		printf("invalid op..\n");
		return;
	}
	struct student *temp=*head,*prev=0;
	while(temp!=0&&temp->rollno!=tr)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==0)
         {
          printf("record not found\n");
          return;
}
if(prev==0)
{
          *head=temp->next;
}
	else
	{
	prev->next=temp->next;
	}
free(temp);
	printf("Record successfully delete..\n");
}

