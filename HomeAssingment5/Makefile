CXX := g++
CXXFLAGS := -std=c++23 -Wall
TARGET := ./app.out
SOURCEs := ./main.cpp

build: $(TARGET)

$(TARGET): $(SOURCEs)
	$(CXX) $(CXXFLAGS) $(SOURCEs) -o $(TARGET)

run:
	$(TARGET)

clean:
	rm -rf $(TARGET)
