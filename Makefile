OBJECTS = List.o Node.o

main: main.o $(OBJECTS)
	g++ -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -g -o tests tests.o $(OBJECTS)

main.o: main.cpp List.h Node.h

tests.o: tests.cpp doctest.h Node.h

List.o: List.cpp List.h Node.h 

Node.o: Node.cpp Node.h

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
