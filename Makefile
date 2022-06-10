generator.x: main.o
	g++ -std=c++11 main.o -o generator.x 

main.o: main.cpp
	g++ -std=c++11 main.cpp -o main.o -c

clean:
	rm -f *.o GENERATEDREADME.md

delete: 
	rm -f *.x *.o GENERATEDREADME.md