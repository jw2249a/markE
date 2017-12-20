CC = clang 
CFLAGS = -c 
LDLIBS = -ldb
IDIR = ../include
sources = bdb.c markE.c
headers = $(IDIR)/markE.h $(IDIR)/bdb.h

.PHONY: all
all: $(programs)
	$(CC) $(CFLAGS) -I $(headers) $(sources)
	$(CC) $(LDLIBS) *o -o main

.PHONY: clean
clean:
	rm main
	rm *.o
	rm *.db
	rm ../env/*
