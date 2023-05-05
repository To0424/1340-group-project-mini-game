FLAGS = -pedantic-errors -std=c++11

main: battle.o shop.o main.o print-drawing.o wordle.o menu.o
	g++ $(FLAGS) $^ -o main

print-drawing.o: print-drawing.cpp print-drawing.h
	g++ $(FLAGS) -c  print-drawing.cpp

menu.o: menu.cpp menu.h
	g++ $(FLAGS) -c menu.cpp

shop.o: shop.cpp shop.h
	g++ $(FLAGS) -c shop.cpp

wordle.o: wordle.cpp wordle.h
	g++ $(FLAGS) -c wordle.cpp

battle.o: battle.cpp battle.h wordle.h shop.h print-drawing.h
	g++ $(FLAGS) -c battle.cpp

clean:
	rm -f *.o game.tgz

tar:
	tar -czvf game.tgz *.cpp *.h

.PHONY: 
	clean tar
