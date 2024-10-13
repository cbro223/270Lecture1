CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJECTS = Node.o BST.o main.o
RM = rm -rf

sq_root_calc: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

BST.o: BST.cpp BST.hpp Node.hpp
	$(CXX) -c $(CXXFLAGS) -o $@ $<

main.o: main.cpp BST.o
	$(CXX) -c $(CXXFLAGS) -o $@ $<

clean:
	$(RM) sq_root_calc $(OBJECTS)

