CXX := g++
CXXFLAGS := -std=c++20 -Wall
TARGET := ./computer_science.out
SOURCE := ./main.cpp
# SOURCES := $(wildcard *.cpp) $(wildcard *.c)

build: $(TARGET)

$(TARGET): $(SOURCE)
# $(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)
	# $(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)
