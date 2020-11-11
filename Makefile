CC=clang++
CXX=clang++

app: app.o func.o call.o

app.o:	app.cpp

call.o: call.cpp call.h func.o

func.o: func.cpp func.h

.PHONY: clean

clean:
	$(RM) *.o app *.*~




