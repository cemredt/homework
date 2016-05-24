CFLAGS=-g -Wall


all:
	 gcc $(CFLAGS) -o vectors vectors.c


clean:
	rm -f *.o vectors
