CC = gcc
CFLAG = -g

.c.o:
	$(CC) $(CFLAGS) -c $*.c
matmul: matmul.c
	$(CC) $(CFLAGS) -o $@ $<
clean:
	rm -rf *~ *.o a.out
.PHONY:
	clean	
