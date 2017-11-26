CFLAGS = -g
LDLIBS = -ldb
IDIR = ../include
sources = markE.c
headers = $(IDIR)
programs = $(basename $(sources))

.PHONY: all
all: $(programs)
%: %.c
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@



.PHONY: clean
clean:
	$(RM) $(programs) *.db

