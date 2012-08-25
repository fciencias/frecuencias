CC=gcc
CFLAGS=-c -Wall -Werror
SOURCES=src/frecuencias.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test

all: $(EXECUTABLE)

$(EXECUTABLE): compile
	$(CC) $(OBJECTS) -o $@

compile:
	$(CC) $(SOURCES)

clean:
	rm -rf *.o $(EXECUTABLES)
