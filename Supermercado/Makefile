GCC = g++
GCC_FLAGS = -I include -std=c++11 
PROGRAMA = super

all: $(PROGRAMA)

$(PROGRAMA): Estabelecimento.o Cliente.o App.o Fornecedor.o main.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) Estabelecimento.o Cliente.o App.o Fornecedor.o main.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

App.o:src/App.cpp
	$(GCC) $(GCC_FLAGS) -c src/App.cpp

Estabelecimento.o: src/Estabelecimento.cpp include/Estabelecimento.hpp
	$(GCC) $(GCC_FLAGS) -c src/Estabelecimento.cpp

Cliente.o: src/Cliente.cpp
	$(GCC) $(GCC_FLAGS) -c src/Cliente.cpp

Fornecedor.o: src/Fornecedor.cpp
	$(GCC) $(GCC_FLAGS) -c src/Fornecedor.cpp

clean:
	rm -f *.o
	rm $(PROGRAMA)