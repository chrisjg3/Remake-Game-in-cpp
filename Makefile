FOLDER=items
SECONDFOLDER=entities/
THIRDFOLDER=derivedItems/

game: $(FOLDER)/Item.o $(FOLDER)/InventoryList.o $(FOLDER)/$(THIRDFOLDER)Healing.o $(SECONDFOLDER)Entity.o basefile.o
		g++ -std=c++11 -o game $(FOLDER)/Item.cpp $(FOLDER)/InventoryList.cpp $(FOLDER)/$(THIRDFOLDER)Healing.cpp $(SECONDFOLDER)Entity.cpp basefile.cpp

# This removes the object codes if need they are no longer up-to-date
clean: 
	rm *.o

run:
	./game