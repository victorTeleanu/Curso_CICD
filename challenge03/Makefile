CC = gcc
CFLAGS = -Wall -g

# Archivos fuente principales
SRC = starter.c

# Archivos de test
TEST = test_challenge03.c

# Nombre del ejecutable
TARGET = challenge03

# Regla principal (compila todo)
all:
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o $(TARGET)

# Ejecutar los tests
test: all
	./$(TARGET)

# Limpiar el ejecutable
clean:
	del $(TARGET).exe