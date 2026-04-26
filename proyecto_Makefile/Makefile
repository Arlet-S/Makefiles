# 1. Variables: Facilitan cambiar el compilador o el nombre del programa
CC = gcc
CFLAGS = -Wall -g
TARGET = area_triangulo

# 2. Regla principal: Se ejecuta al escribir solo 'mingw32-make'
all: $(TARGET)

# 3. Regla de enlace: Une el objeto para crear el ejecutable (.exe en Windows)
$(TARGET): main.o
	$(CC) $(CFLAGS) main.o -o $(TARGET)

# 4. Regla de compilacion: Crea el archivo objeto
main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

# 5. Regla de ejecucion: Compila y corre el programa de una vez
run: all
	./$(TARGET)

# 6. Regla de limpieza: IMPORTANTE para mantener el repo limpio
# Usamos 'del' porque estas en Windows
clean:
	del /f /q *.o $(TARGET).exe

.PHONY: all run clean