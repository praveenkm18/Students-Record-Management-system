#include"student.h"
int main()
{
	struct student *head=0;
	char ch;
	while(1)
	{
		printf("*****STUDENT RECORD MENU*****\n");
		printf("a/A : Add new record\n");
		printf("d/D : Delete a record\n");
		printf("s/S : Show the list\n");
		printf("m/M : Modify a record\n");
		printf("v/V : Save record\n");
		printf("e/E : Exit\n");
		printf("t/T : Sort the list\n");
		printf("l/L : Delete all the records\n");
		printf("r/R : Reverse the list\n");
		if(scanf(" %c",&ch)!=1)
		{
			printf("invalid input..\n");
		}
		switch(ch)
		{
			case 'a':
			case 'A':Addnewrecord(&head);break;
			case 'd':
			case 'D':Deletearecord(&head);break;
			case 's':
			case 'S':showthelist(head);break;
			case 'm':
			case 'M':Modifyarecord(head);break;
			case 'v':
			case 'V':Saverecords(head);break;
			case 't':
			case 'T':Sortthelist(&head);break;
			case 'l':
			case 'L':Deletealltherecords(&head);break;
			case 'r':
			case 'R':Reversethelist(&head);
			case 'e':
			case 'E': printf("S/s : save and exit\n");
				  printf("E/e : exit without saving\n");
				  printf("enter your choice\n");
				  scanf(" %c",&ch);
				  if(ch=='s'||ch=='S')
				  {
					  Saverecords(head);
					  Deletealltherecords(&head);
					  exit(0);
				  }
				  else if(ch=='e'||ch=='E')
				  {
					  Deletealltherecords(&head);
					  exit(0);
				  }
			default :printf("unknown choice\n");
		}
	}
}
