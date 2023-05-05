main: battle.o shop.o main.o print-drawing.o wordle.o menu.o
	g++ $^ -o main

print-drawing.o: print-drawing.cpp print-drawing.h
	g++ -c print-drawing.cpp

menu.o: menu.cpp menu.h
	g++ -c menu.cpp

shop.o: shop.cpp shop.h
	g++ -c shop.cpp

wordle.o: wordle.cpp wordle.h
	g++ -c wordle.cpp

battle.o: battle.cpp battle.h wordle.h shop.h print-drawing.h
	g++ -c battle.cpp

clean:
	rm -f *.o game.tgz

tar:
	tar -czvf game.tgz *.cpp *.h

.PHONY: 
	clean tar
