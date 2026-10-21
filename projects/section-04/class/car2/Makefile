CXX=g++
CXXFLAGS=-std=c++17 -Wall -Wextra -Iinc

SRC=src/main.cpp src/car.cpp

app: $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o app

run: app
	./app

clean:
	rm -f app
