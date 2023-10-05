CXX := clang++
CXXFLAGS := -std=c++20 -Wall
TARGET := ./leetcode
SOURCES := $(wildcard *.cpp) $(wildcard *.c)

build: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)