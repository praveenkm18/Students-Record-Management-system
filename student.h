#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
};
void Addnewrecord(struct student **);
void Deletearecord(struct student **);
void showthelist(struct student *);
void Modifyarecord(struct student *);
void Saverecords(struct student *);
void Loadrecords(struct student **);
void Sortthelist(struct student **);
void Deletealltherecords(struct student **);
void Reversethelist(struct student **);
