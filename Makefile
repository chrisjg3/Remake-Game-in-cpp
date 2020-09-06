FOLDER=items
SECONDFOLDER=entities/
THIRDFOLDER=derivedItems/

game: $(FOLDER)/Item.o $(FOLDER)/InventoryList.o $(FOLDER)/$(THIRDFOLDER)Healing.o $(SECONDFOLDER)Entity.o GameData.o LevelStruct.o basefile.o
		g++ -std=c++11 -o game $(FOLDER)/Item.cpp $(FOLDER)/InventoryList.cpp $(FOLDER)/$(THIRDFOLDER)Healing.cpp $(SECONDFOLDER)Entity.cpp GameData.cpp LevelStruct.cpp basefile.cpp


clean: 
	rm *.o

run:
	./game