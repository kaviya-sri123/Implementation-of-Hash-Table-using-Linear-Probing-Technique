a.exe:hash_app.o hash_imp.o
	c++ hash_app.o hash_imp.o -o a.exe
hash_app.o:hash_app.cpp
	c++ -c hash_app.cpp
hash_imp.o:hash_imp.cpp
	c++ -c hash_imp.cpp