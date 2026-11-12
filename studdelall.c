#include"student.h"
void Deletealltherecords(struct student **head)
{
if(head==0)
{
printf("No records founds\n");
return ;
}
struct student *curr=*head,*next;
while(curr!=0)
{
next=curr->next;
free(curr);
curr=next;
}
*head=0;
}

void Reversethelist(struct student **head)
{
struct student *prev=0,*curr=*head,*next=0;
while(curr!=0)
{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
*head=prev;
printf("linked list completely reversed..\n");
}
