lab4: main.o Executive.o Rating.o
	g++ -std=c++11 -g -Wall main.o Executive.o Rating.o -o lab4

main.o: main.cpp Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp BinaryTree.h BinaryTree.cpp TreeNode.h TreeNode.cpp Rating.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

Rating.o: Rating.h Rating.cpp
	g++ -std=c++11 -g -Wall -c Rating.cpp
clean:
	rm *.o lab4
