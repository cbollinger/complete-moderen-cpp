CXX=g++

INCDIRS := \
	inc

CPPFLAGS := $(addprefix -I,$(INCDIRS))

CXXFLAGS=-std=c++17 -Wall -Wextra -fno-elide-constructors

SRCDIR := src
SRC := \
	$(SRCDIR)/main.cpp \
	$(SRCDIR)/a.cpp \
	$(SRCDIR)/b.cpp

Target := app

$(Target): $(SRC)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

run: app
	./app

clean:
	rm -f app
