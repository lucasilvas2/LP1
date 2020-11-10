#Makefile C++ application

BIN  = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/produto.o $(BIN)/fruta.o $(BIN)/roupa.o $(BIN)/bebida.o $(BIN)/loja.o $(BIN)/main.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -o0
debug: clean all

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/produto.o : $(SRC)/produto.cpp $(INC)/produto.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/produto.cpp -o $@
$(BIN)/fruta.o : $(SRC)/fruta.cpp $(INC)/fruta.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/fruta.cpp -o $@
$(BIN)/roupa.o : $(SRC)/roupa.cpp $(INC)/roupa.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/roupa.cpp -o $@
$(BIN)/bebida.o : $(SRC)/bebida.cpp $(INC)/bebida.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/bebida.cpp -o $@
$(BIN)/loja.o : $(SRC)/loja.cpp $(INC)/loja.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/loja.cpp -o $@
clean:
	rm -f core $(PROG) $(OBJS)
