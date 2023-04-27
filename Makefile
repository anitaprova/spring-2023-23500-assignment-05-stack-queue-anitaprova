OBJECTS = Stacks.o Node.o Queues.o

main: main.o $(OBJECTS)
	g++ -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -g -o tests tests.o $(OBJECTS)

main.o: main.cpp Stacks.h Node.h

tests.o: tests.cpp doctest.h Node.h

Queues.o: Queues.cpp Queues.h Node.h

Stacks.o: Stacks.cpp Stacks.h Node.h 

Node.o: Node.cpp Node.h

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
