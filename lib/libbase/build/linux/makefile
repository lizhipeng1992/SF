CC        = gcc 
CFLAGS    = -Wall -O -g
CXXFLAGS  = 
INCLUDE   = -I ./include
TARGET    = libbase.a
LIBPATH   = ./lib/


OBJS      = ObjectBase.o ProtoImpl.o EString.o
SRCS      = ./business/ObjectBase.cpp ./business/ProtoImpl.cpp ./business/EString.cpp

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^

all:$(OBJS)
	ar rcs $(TARGET) $^ 
	mv $(TARGET) $(LIBPATH)

clean:
	rm -f *.o
	rm -f $(LIBPATH)*