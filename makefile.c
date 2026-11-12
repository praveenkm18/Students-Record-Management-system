student:main.o stud_show.o stud_save.o stud_mod.o stud_del.o studdelall.o stud_add.c sortdata.o
	cc main.o stud_show.o stud_save.o stud_mod.o stud_del.o studdelall.o stud_add.c sortdata.o -o student
main.o:main.c
	cc -c main.c
stud_show.o:stud_show.c
	cc -c stud_show.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_del.o:stud_del.c
	cc -c stud_del.c
studdelall.o:studdelall.c
	cc -c studdelall.c
stud_add.o:stud_add.c
	cc -c studelall.c
sortdata.o:sortdata.c
	cc -c sortdata.c
clear :
	@echo "clearing up......"
	@rm -r *.o
