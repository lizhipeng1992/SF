CC        = g++
CFLAGS    = -Wall -O -g
CXXFLAGS  = 
INCLUDE   = -I ../lib/libbase/include/json -I ../lib/libbase/include -I ../lib/libbusiness/include -I ../lib/libmultiplat/include -I ../src/
TARGET    = FrameWork
LIBPATH   = .


OBJS      = FrameContext.o\
			Library.o\
			SmartEngine.o\
			SmartFrame.o\

$(TARGET): $(OBJS) libbase.a libmultiplat.a
	$(CC) $(CFLAGS) -o $@ $^
	mv *.o ./debug/
%.o:../src/%.cpp
	$(CC) $(CFLAGS) -c $< $(INCLUDE)

clean:
	rm -f ./debug/*.o
	rm -f $(LIBPATH)/$(TARGET)