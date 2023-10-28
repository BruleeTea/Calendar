OPT = -Wall

cal:	main.o Event.o Date.o Calendar.o Control.o View.o List.o Time.o WorkEvent.o SchoolEvent.o
	g++ $(OPT) -o cal main.o Event.o Date.o Calendar.o Control.o View.o List.o Time.o WorkEvent.o SchoolEvent.o

main.o:	main.cc 
	g++ $(OPT) -c main.cc

Event.o:Event.cc Event.h
	g++ $(OPT) -c Event.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

Control.o: Control.cc Control.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc
Time.o: Time.cc Time.h
	g++ $(OPT) -c Time.cc
WorkEvent.o: WorkEvent.cc WorkEvent.h
	g++ $(OPT) -c WorkEvent.cc
SchoolEvent.o: SchoolEvent.cc SchoolEvent.h
	g++ $(OPT) -c SchoolEvent.cc
clean:
	rm -f *.o cal
