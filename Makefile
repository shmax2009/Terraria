.PHONY: release all clean cleanall

LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
FLAGS = -std=c++11 -I ./code/Include
CXX = g++

RELEASE = -Wl,-rpath,./lib

SOURCES = $(shell find . -name "*.cpp" -not -path "./tests/*")
TMP = $(notdir $(SOURCES))
OBJECTS = $(addprefix ./build/, $(TMP:.cpp=.o))

all: play

release: $(OBJECTS)
	g++ -o play $(OBJECTS) $(LIBS) $(FLAGS) $(RELEASE)

play: $(OBJECTS)
	g++ -o play $(OBJECTS) $(LIBS) $(FLAGS)

# maybe a recursive loop through dirs?
#						  |  
#						  .  here?

$(OBJECTS): build/%.o : code/%.cpp
	g++ -c $< -o $@ $(LIBS) $(FLAGS)

clean:
	@echo "** Removing object files..."
	rm -f ./build/*.o

cleanall:
	@echo "** Removing object files and executable..."
	rm -f ./build/*.o
	rm -f play

install:
	@echo "** Installing..."
#	cp thegame /usr/bin

uninstall:
	@echo "** Uninstalling..."
#	rm play
