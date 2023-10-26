CXX := clang++
CXXFLAGS := -std=c++20 -Wall
TARGET := ./computer_science.out
SOURCES := ./main.cpp
# SOURCES := $(wildcard *.cpp) $(wildcard *.c)

build: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)