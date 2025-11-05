CC = gcc
CFLAGS = -Wall -g

# Archivos fuente principales
SRC = starter.c

# Archivos de test
TEST = test_challenge01.c

# Nombre del ejecutable
TARGET = challenge01

# Regla principal (compila todo)
all:
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o $(TARGET)

# Ejecutar los tests
test: all
	./$(TARGET)

# Limpiar el ejecutable
clean:
	del $(TARGET).exe