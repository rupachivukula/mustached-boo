CC=g++
CFLAGS= -c -Wall -std=c++11
SOURCES=example.cpp
#OBJECTS=$(SOURCES: .cpp=.o)
EXECUTABLE=test2

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): example.o
	$(CC) example.o -o $@

example.o: example.cpp
	$(CC) $(CFLAGS) example.cpp

clean:
	rm -f *.o *~
