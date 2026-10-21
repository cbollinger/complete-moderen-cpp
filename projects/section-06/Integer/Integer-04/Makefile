CXX=g++
CXXFLAGS=-std=c++17 -Wall -Wextra -fno-elide-constructors -I../inc

SRC=src/main.cpp ../src/integer.cpp

app: $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o app

run: app
	./app

clean:
	rm -f app
