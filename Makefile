CC=gcc
CFLAGS=-c -Wall -Werror -o contador
LDFLAGS=
SOURCES=src/frecuencias.c src/main.c 
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test

all: $(EXECUTABLE)

$(EXECUTABLE): compile
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

compile:
	$(CC) $(SOURCES)

clean:
	rm -rf *.o $(EXECUTABLES)
