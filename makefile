PJ1:	main.o IS.o MS.o QS.o
	g++ -o PJ1 main.o IS.o MS.o QS.o
main.o:	main.cpp IS.h MS.h QS.h 
	g++ -c -Wall main.cpp
IS.o:	IS.cpp IS.h
	g++ -c -Wall IS.cpp
MS.o:	MS.cpp MS.h
	g++ -c -Wall MS.cpp
QS.o:	QS.cpp QS.h
	g++ -c -Wall QS.cpp
