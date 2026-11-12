#include"student.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Saverecords(struct student *head)
{
FILE *fp=fopen("student.dat","wb");
if(fp==0)
{
printf("error opening file!\n");
return;
}
while(head!=0)
{
fwrite(&head->rollno,sizeof(int),1,fp);
fwrite(&head->name,sizeof(char),50,fp);
fwrite(&head->percentage,sizeof(float),1,fp);
head=head->next;
}
fclose(fp);
printf("Records saved successfully!\n");
}
void Loadrecords(struct student **head)
{
FILE *fp=fopen("student.dat","rb");
if(fp==0)
{
return;
}
struct student *tail=0;
int rno;
char nm[50];
float pct;
while(fread(&rno,sizeof(int),1,fp)==1)
{
fread(nm,sizeof(char),50,fp);
fread(&pct,sizeof(float),1,fp);
struct student *new=malloc(sizeof(struct student));
new->rollno=rno;
strcpy(new->name,nm);
new->percentage=pct;
new->next=0;
if(*head==0)
{
*head=new;
}
else
{
tail->next=new;
}
tail=new;
}
fclose(fp);
}

