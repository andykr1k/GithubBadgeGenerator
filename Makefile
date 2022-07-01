generator.x: main.o
	g++ -std=c++17 main.o -o generator.x 

main.o: main.cpp
	g++ -std=c++17 main.cpp -o main.o -c

clean:
	rm -f *.x *.o READ.md