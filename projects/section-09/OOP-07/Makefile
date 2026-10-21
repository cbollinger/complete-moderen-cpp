CXX=g++
CXXFLAGS=-std=c++17 -Wall -Wextra -fno-elide-constructors -I../inc

SRC=src/main.cpp ../src/Account.cpp ../src/Savings.cpp ../src/Checking.cpp ../src/Transaction.cpp

app: $(SRC)
    $(CXX) $(CXXFLAGS) $(SRC) -o app

run: app
    ./app

clean:
    rm -f app
