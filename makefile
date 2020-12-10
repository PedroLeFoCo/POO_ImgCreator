STB_INCLUDE_PATH = ./extern/stb

CFLAGS = -std=c++11 -g -I$(STB_INCLUDE_PATH) -Isrc
LDFLAGS =

APP = FigureCreator
OBJ = miniproj.o Segment.o Figure.o Drawing.o Save.o

$(APP): $(OBJ)
	g++ $(CFLAGS) -o $(APP) $(OBJ) $(LDFLAGS)

Save.o: src/Save.cpp
	g++ $(CFLAGS) -c src/Save.cpp $(LDFLAGS)

miniproj.o: miniproj.cpp
	g++ $(CFLAGS) -c miniproj.cpp $(LDFLAGS)

Drawing.o: src/Drawing.cpp
	g++ $(CFLAGS) -c src/Drawing.cpp $(LDFLAGS)

Segment.o: src/Segment.cpp
	g++ $(CFLAGS) -c src/Segment.cpp $(LDFLAGS)

Figure.o: src/Figure.cpp
	g++ $(CFLAGS) -c src/Figure.cpp $(LDFLAGS)

.PHONY: test clean

clean:
	rm -f $(APP)
	rm -f *.o
