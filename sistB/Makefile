# Nombre del ejecutable
EXEC = programa

# Compilador y flags
CC = gcc
CFLAGS = -Wall -g

# Archivos fuente
SRCS = principalB.c pedirOpcion.c

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Regla por defecto
all: $(EXEC)

# Regla para compilar el ejecutable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

# Regla para compilar los archivos fuente a objetos
%.o: %.c pedirOpcion.h
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(EXEC) $(OBJS)
