# Define o compilador
CC = gcc

# Define as flags do compilador
# -Wall: Habilita todos os warnings
# -g: Inclui informações de debug
CFLAGS = -Wall -g

# Define os arquivos fonte
SRCS = matrizes-struct.c matriz.c

# Define os arquivos objeto (gerados a partir dos fontes)
OBJS = $(SRCS:.c=.o)

# Define o nome do executável
EXEC = meu_programa_matriz

# Regra padrão: compila o executável
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

# Regra para compilar cada arquivo .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpa os arquivos gerados pela compilação
clean:
	rm -f $(OBJS) $(EXEC)