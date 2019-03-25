CXXFLAGS=-O3 -Wall -Iinclude
SRC_FILES=$(wildcard src/*.cpp)
HEADERS=$(wildcard include/*.hpp)
BIN_FILES=$(patsubst src/%.cpp,bin/%,$(SRC_FILES))

.PHONY: all format clean

all: $(BIN_FILES) format

format:
	echo $(SRC_FILES) $(HEADERS) | xargs clang-format -style=file -fallback-style=llvm -i

bin/%: src/%.cpp $(HEADERS)
	@mkdir -p bin
	g++ $(CXXFLAGS) -o $@ $<

clean:
	rm -f bin/*
