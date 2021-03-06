CXX = g++-4.9
STD = c++11
EXE = cpp-math
RM = rm -f

all:
	$(CXX) src/*.cpp -o $(EXE)

install: all
	cp -v $(EXE) /usr/bin/

run: all
	./$(EXE)

uninstall:
	$(RM) /usr/bin/$(EXE)

clean:
	$(RM) $(EXE)
