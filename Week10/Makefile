CXX := g++
CXXFLAGS := -std=c++23 -Wall
TARGET := ./app.out
SOURCE := ./main.cpp

build: $(TARGET)
$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)