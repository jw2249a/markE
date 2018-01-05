CC = clang
RFLAGS= -fcommon -S -masm=intel -Weverything -fsave-optimization-record \
--optimize -dI
CFLAGS = -c 
LDLIBS = -ldb
IDIR = ../include
sources = bdb.c markE.c
headers = $(IDIR)/bdb.h $(IDIR)/markE.h

.PHONY: all
all: 
	$(CC) $(CFLAGS) -I $(headers) $(sources)
	$(CC) $(LDLIBS) *o -o main
	mkdir -p ../env
.PHONY: review

review:
	$(CC) $(RFLAGS) $(headers) $(sources)
	cat *.s > out
	cat *.yaml > opt
	rm *.s
	rm *.yaml
	mv out assem_out.s
	mv opt comp_opt.yaml

.PHONY: clean
clean:
	rm main
	rm *.o
	rm ../env/*
	rm ../include/*.gch
