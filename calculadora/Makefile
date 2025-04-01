# Variáveis do compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Lista de arquivos objeto
OBJS = main.o calculator.o fraction.o math.o

# Nome do executável
TARGET = calculadora

# Regra padrão: compila e linka tudo
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regras para gerar os .o a partir dos .cpp
main.o: main.cpp calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

calculator.o: calculator.cpp calculator.h fraction.h math.h
	$(CXX) $(CXXFLAGS) -c calculator.cpp

fraction.o: fraction.cpp fraction.h
	$(CXX) $(CXXFLAGS) -c fraction.cpp

math.o: math.cpp math.h
	$(CXX) $(CXXFLAGS) -c math.cpp

# Limpeza dos arquivos objeto e executável
clean:
	rm -f $(OBJS) $(TARGET)