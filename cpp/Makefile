sources := $(patsubst %.cpp, %, $(wildcard *.cpp))

all: $(sources)

%: %.cpp
	g++ $< -o bin/$@