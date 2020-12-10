STB_INCLUDE_PATH = ./extern/stb

CFLAGS = -std=c++11 -g -I$(STB_INCLUDE_PATH) -Isrc
LDFLAGS =

APP = FigureCreator
OBJ = miniproj.o Drawing.o Save.o Figure.o Segment.o Rectangle.o Croix.o


$(APP): $(OBJ)
	g++ $(CFLAGS) -o $(APP) $(OBJ) $(LDFLAGS)

miniproj.o: miniproj.cpp
	g++ $(CFLAGS) -c miniproj.cpp $(LDFLAGS)

Drawing.o: src/Drawing.cpp
	g++ $(CFLAGS) -c src/Drawing.cpp $(LDFLAGS)

Save.o: src/Save.cpp
	g++ $(CFLAGS) -c src/Save.cpp $(LDFLAGS)

Figure.o: src/Figure.cpp
	g++ $(CFLAGS) -c src/Figure.cpp $(LDFLAGS)

Segment.o: src/Segment.cpp
	g++ $(CFLAGS) -c src/Segment.cpp $(LDFLAGS)

Rectangle.o: src/Rectangle.cpp
	g++ $(CFLAGS) -c src/Rectangle.cpp $(LDFLAGS)

Croix.o: src/Croix.cpp
	g++ $(CFLAGS) -c src/Croix.cpp $(LDFLAGS)

.PHONY: test clean

clean:
	rm -f $(APP)
	rm -f *.o
