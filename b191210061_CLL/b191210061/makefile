hepsi: lib derle calistir
lib:
	g++ -I ./include/ -o ./lib/AVLNode.o -c ./src/AVLNode.cpp
	g++ -I ./include/ -o ./lib/AVL.o -c ./src/AVL.cpp
derle:	
	g++ -I ./include/ -o ./bin/test ./lib/AVL.o ./lib/AVLNode.o ./src/test.cpp
calistir:
	./bin/test