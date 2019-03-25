CXXFLAGS=-O3 -Wall -Iinclude

SRC_FILES=$(wildcard src/*.cpp)
HEADERS=$(wildcard include/*.hpp)
BIN_FILES=$(patsubst src/%.cpp,bin/%,$(SRC_FILES))

.PHONY: all clean 

all: $(BIN_FILES)

bin/%: src/%.cpp $(HEADERS)
	    @mkdir -p bin
		    g++ $(CXXFLAGS) -o $@ $<

clean:
	    rm bin/*
