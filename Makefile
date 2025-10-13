# Déclare les fichiers sources
SOURCES = main.c neurone.c

# Déclare les fichiers objets
OBJECTS = $(SOURCES:.c=.o)

# Nom de l'exécutable
EXEC = projet.exe

# Options de compilation
CFLAGS = -Wall -pedantic -std=c99

# Règle par défaut pour créer l'exécutable
$(EXEC): $(OBJECTS)
	
	gcc $(OBJECTS) -o $(EXEC)

# Règle pour compiler les fichiers .c en .o
%.o: %.c
	
	gcc $(CFLAGS) -c $<

# Règle pour nettoyer les fichiers générés
clean:
	
	del /Q *.o $(EXEC)
