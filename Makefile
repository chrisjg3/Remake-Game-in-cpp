# Makes game executable file
game: Item.o InventoryList.o Entity.o Healing.o basefile.o
		g++ -std=c++11 -o game basefile.cpp Item.cpp InventoryList.cpp Entity.cpp Healing.cpp


# This removes the object codes if need they are no longer up-to-date
clean: Item.o InventoryList.o Entity.o Healing.o basefile.o
		rm Item.o InventoryList.o Entity.o Healing.o basefile.o