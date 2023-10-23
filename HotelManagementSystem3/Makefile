CXX := g++
CXXFLAGS := -std=c++20 -Wall
TARGET := ./build/hotel_management_system.out
SOURCES := $(wildcard **/*.cpp)
INCLUDES := $(wildcard **/*.hpp) $(wildcard **/*.hpp)

build: $(TARGET)

$(TARGET): $(SOURCES) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)
