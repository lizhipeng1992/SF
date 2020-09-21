CC        = g++
CFLAGS    = -Wall -O -g -fPIC
LDFLAGS   = -shared -fpic
CXXFLAGS  = 
INCLUDE   = -I ../../include -I ../../../libbase/include -I ../../../libbase/include/json 
TARGET    = libbusiness.so
LIBPATH   = ../../../../os_linux

OBJS      = BSSubsLoginChk.o\
			libentry.o

SRCS      = ../../business/BSSubsLoginChk.cpp\
			../../business/libentry.cpp

all:$(TARGET)

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^
	
$(TARGET):$(OBJS) $(LIBPATH)/libbase.a
	$(CC) -shared -fPIC -o $(TARGET) $(OBJS) $(LIBPATH)/libbase.a
	mv *.o ./debug
clean:
	rm -f ./debug/*.o
	rm -f $(LIBPATH)/$(TARGET)

install:
	mv $(TARGET) $(LIBPATH)