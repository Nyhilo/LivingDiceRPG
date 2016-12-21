objects = LivingDiceRPG.o Attack.o Monster.o Player.o Render.o Weapon.o 

LivingDiceRPG.exe : $(objects)
	g++ -o $(objects)

LivingDiceRPG.o : LivingDiceRPG.cpp LivingDiceRPG.h
	g++ -c LivingDiceRPG.cpp

Attack.o : Attack.cpp Attack.h
	g++ -c Attack.cpp

Monster.o : Monster.cpp Monster.h
	g++ -c Monster.cpp

Player.o : Player.cpp Player.h
	g++ -c Player.cpp

Render.o : Render.cpp Render.h
	g++ -c Render.cpp

Weapon.o : Weapon.cpp Weapon.h
	g++ -c Weapon.cpp