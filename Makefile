LIBS= -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
CXX = g++
CXXFLAGS=-I /opt/SFML-2.5.1/include -I Include
SOURCES=$(shell find .  -name "*.cpp" -not -path "./tests/*")
OBJECTS=$(SOURCES:.cpp=.o)

all: play

depend: .depend

.depend: $(srcfiles)
	rm -f ./.depend
	$(CXX) $(CXXFLAGS) -MM $^>>./.depend -static;



play: $(OBJECTS)
	$(CXX) -o play $(OBJECTS) $(LIBS) -L /opt/SFML-2.5.1/lib 

clean:
	@echo "** Removing object files and executable..."
	rm *.o
	rm -f play

install:
	@echo '** Installing...'
#	cp thegame /usr/bin

uninstall:
	@echo '** Uninstalling...'
#	rm play
