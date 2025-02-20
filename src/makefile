CXX = g++
CXXFLAGS = -std=c++11 -I/opt/homebrew/include  # Enforce C++11 or later
LDFLAGS = -L/opt/homebrew/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

SRC = $(wildcard *.cpp)  # Finds all .cpp files in the current directory
OBJ = $(SRC:.cpp=.o)  # Converts .cpp to .o
TARGET = game  # Output executable name

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)
