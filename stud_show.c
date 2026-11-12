#include"student.h"
void showthelist(struct student *head)
{
if(head==0)
{
printf("\n No student records available..\n");
return ;
}
printf("\n-----------------------------------\n");
printf("%-10s %-15s %-10s\n","rollno.","name","percentage");
printf("-------------------------------------\n");
while(head!=0)
{
printf("%-10d %-15s %-10.2f\n",head->rollno,head->name,head->percentage);
head=head->next;
}
printf("-------------------------------------\n");
}
