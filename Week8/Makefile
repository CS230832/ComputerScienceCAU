CXX := g++
CXXFLAGS := -std=c++20 -Wall
TARGET := ./computer_science
SOURCES := ./main.cpp
build: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)