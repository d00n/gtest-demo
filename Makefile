IDIR=include
CC=g++
CFLAGS=-I$(IDIR) -std=c99
CCFLAGS=-I$(IDIR)

ODIR=obj
LDIR=lib

LIBS=-lm

_DEPS = GtestHelper.h GtestC.h Sample.h SampleInclude.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Sample.o GtestHelper.o SampleHelper.o SampleTest.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CCFLAGS)

runTests: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(ODIR)/*.o *~ core $(INCDIR)/*~

