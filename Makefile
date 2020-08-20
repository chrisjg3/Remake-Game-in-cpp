
# # Makes game executable file
# game: Item.o InventoryList.o Entity.o Healing.o basefile.o
# 		g++ -std=c++11 -o game basefile.cpp Item.cpp InventoryList.cpp Entity.cpp Healing.cpp


entities/Entity.o: entities/Entity.cpp entities/Entity.hpp Item.cpp Item.h
	g++ -std=c++11 -o $@ -c $<

items/Item.o: items/Item.cpp items/Item.h
	g++ -std=c++11 -o $@ -c $<

items/derivedItems/Healing.o: items/derivedItems/Healing.cpp items/derivedItems/Healing.h
	g++ -std=c++11 -o $@ -c $<

basefile.o: basefile.cpp basefile.hpp
	g++ -std=c++11 -o $@ -c $<

game: entities/Entity.o items/Item.o items/derivedItems/Healing.o basefile.o
	g++ -std=c++11 -o $@ $^


# This removes the object codes if need they are no longer up-to-date
# clean: Item.o InventoryList.o Entity.o Healing.o basefile.o
# 		rm Item.o InventoryList.o Entity.o Healing.o basefile.o