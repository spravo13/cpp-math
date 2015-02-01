CXX = g++-4.7
STD = c++11
CFLAGS = -Wall -g
EXE = cpp-math
RM = rm -f

all:
	$(CXX) src/*.cpp -o $(EXE)

#cpp-math:
#$(CXX) -o $(EXE) src/*.cpp
#run: cpp-math
#        ./$(EXE)

#%.o: src/%.cpp
#        $(CXX) -std=$(STD) -c -o $@ $<

#install: cpp-math
#        cp -v $(EXE) /usr/bin/

#uninstall:
#$(RM) /usr/bin/$(EXE)
