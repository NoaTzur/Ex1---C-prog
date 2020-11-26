CC = gcc
FLAGS=-Wall


all: mains maind
	
	
maind: main.o libmyMath.so 
	$(CC) $(FLAGS) main.o -L. -lmyMath -o maind
	
mains: main.o libmyMath.a
	$(CC) $(FLAGS) main.o -L. -lmyMath -o mains
	
main.o: mainProg.c
	$(CC) $(FLAGS) -c mainProg.c -o main.o
	
	
libmyMath.a: basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o
	
	
libmyMath.so: basicMath.o power.o myMath.h
	$(CC) -shared $(FLAGS) basicMath.o power.o -o libmyMath.so
	
	
	
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c -fPIC basicMath.c
	
power.o: power.c
	$(CC) $(FLAGS) -c -fPIC power.c

	
.PHONY: clean all 


clean:
	rm -f mains maind *.o
	

