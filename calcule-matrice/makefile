# Compiler
CC = gcc
# Flags de compilation
CFLAGS = -I include
# Commande pour supprimer
RM = rm

# Dossier contenant les fichiers source
SRCDIR = src
# Dossier pour les fichiers objets
OBJDIR = obj
# List des fichiers source
SRCS = $(wildcard $(SRCDIR)/*.c)
# Noms des fichiers objets générés à partir des fichiers sources
OBJS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRCS))
# Nom de l'exécutable final
TARGET =  ./bin/programme

# Règle pour compiler tous les fichiers objets et créer l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Règle générique pour créer les fichiers objets à partir des fichiers sources
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Création du dossier obj s'il n'existe pas
$(shell mkdir -p $(OBJDIR))

run :
	$(TARGET)

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	$(RM) $(OBJS) $(TARGET)
