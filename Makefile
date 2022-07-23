TARGET=byte-order-test
CXXFLAGS=-g

#all: $(TARGET)

#$(TARGET): main.o
#	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

add-nbo : homework.o
	g++ -g homework.o -o add-nbo

homewwork.o : homework.cpp
	g++ -c homework.cpp

clean:
	rm -f $(TARGET)
	rm -f *.o

