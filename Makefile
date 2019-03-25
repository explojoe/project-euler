XXFLAGS=-O3 -Wall -Iinclude

SRC_FILES=$(wildcard src/*.cpp)
HEADERS=$(wildcard include/*.hpp)
BIN_FILES=$(patsubst src/%.cpp,bin/%,$(SRC_FILES))

.PHONY: all format clean

format:
	echo $(SRC_FILES) $(HEADERS) | xargs clang-format -style=llvm -i

all: $(BIN_FILES)

bin/%: src/%.cpp $(HEADERS)
	@mkdir -p bin
		g++ $(CXXFLAGS) -o $@ $<

clean:
	rm -f bin/*
