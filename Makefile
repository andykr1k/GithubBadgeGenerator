generator.x: main.o
	g++ main.o -o generator.x 

main.o: main.cpp
	g++ main.cpp -o main.o -c

clean:
	rm -f *.o GENERATEDREADME.md