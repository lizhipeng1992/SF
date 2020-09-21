CC        = g++
CFLAGS    = -Wall -O -g
CXXFLAGS  = 
INCLUDE   = -I ../lib/libbase/include -I ../lib/libbusiness/include -I ../lib/libmultiplat/include -I ../src/
TARGET    = libbase.a
LIBPATH   = ../../../../os_linux/


OBJS      = FrameContext.o\
			libentry.o\
			Library.o\
			SmartEngine.o\
			SmartFrame.o\
all: $(TARGET) libbase.a
$(TARGET): $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $^
%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o
	rm -f $(LIBPATH)/$(TARGET)