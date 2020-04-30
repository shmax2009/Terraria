.PHONY: release all clean cleanall

LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
FLAGS = -std=c++11 -I ./code/Include -I /opt/SFML-2.5.1/include -ggdb 
LDFLAGS = -L /opt/SFML-2.5.1/lib -no-pie
CXX = g++

RELEASE = -Wl,-rpath,./lib

SOURCES = $(shell find . -name "*.cpp" -not -path "./tests/*")
TMP = $(notdir $(SOURCES))
OBJECTS = $(addprefix ./build/, $(TMP:.cpp=.o))

all: Terraria

release: $(OBJECTS)
	g++ -o Terraria $(OBJECTS) $(LIBS) $(FLAGS) $(RELEASE)

Terraria: $(OBJECTS)
	g++ -o Terraria $(OBJECTS) $(LIBS) $(FLAGS) $(LDFLAGS) 

# maybe a recursive loop through dirs?
#						  |  
#						  .  here?

$(OBJECTS): build/%.o : code/cpp_files/%.cpp
	g++ -c $< -o $@ $(LIBS) $(FLAGS)

clean:
	@echo "** Removing object files..."
	rm -f ./build/*.o

cleanall:
	@echo "** Removing object files and executable..."
	rm -f ./build/*.o
	rm -f Terraria

install:
	@echo "** Installing..."
#	cp thegame /usr/bin

uninstall:
	@echo "** Uninstalling..."
#	rm Terraria
