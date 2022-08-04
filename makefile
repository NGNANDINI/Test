ABC.exe:main.o big2.o fact.o rev.o pal.o big3.o fibbo.o
	gcc -o ABC.exe main.o big2.o fact.o rev.o pal.o big3.o fibbo.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
pal.0:pal.c
	gcc -c pal.c
big3.o:big3.c
	gcc -c big3.c
fibbo.o:fibbo.c
	gcc -c fibbo.c
clean:
	rm -rf *.o
