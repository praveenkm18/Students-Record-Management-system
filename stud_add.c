#include"student.h"
void Addnewrecord(struct student **head)
{
	struct student *new=malloc(sizeof(struct student));
	int roll=1;
	while(1)
	{
		struct student *temp=*head;
		int f=0;
		while(temp!=0)
		{
			if(temp->rollno==roll)
			{
                         f=1;break;
			}  
			temp=temp->next;
                }
			if(!f)break;
			roll++;
		}
		new->rollno=roll;
             printf("enter name & percentage\n");
             scanf("%s %f",new->name,&new->percentage);
		new->next=0;
		if(*head==0)
		{
			*head=new;
		}
		else 
		{
			struct student *temp=*head;
			while(temp->next!=0)temp=temp->next;
			temp->next=new;
		}
		printf("Record added successfully!\n");
	}
