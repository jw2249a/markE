CFLAGS = -c
LDLIBS = -ldb
IDIR = ../include
sources = bdb.c markE.c
headers = $(IDIR)
programs = $(basename $(sources))

.PHONY: all
all: $(programs)
	$(CC) $(CFLAGS) $(sources)
	$(CC) $(LDLIBS) *o -o a.out



.PHONY: clean
clean:
	rm *o
	rm *.c.db
	rm a.out

