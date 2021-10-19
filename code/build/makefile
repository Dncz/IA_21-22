IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11 -g

ODIR=../src
LDIR =../lib

LIBS=-lm

_OBJ = car.o town.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: Taxi

$(ODIR)/main.o: $(ODIR)/main.cc  
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/car.o: $(ODIR)/car.cc  
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/town.o: $(ODIR)/town.cc  
	$(CC) -c -o $@ $< $(CFLAGS)

Taxi: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(INCDIR)/*~
