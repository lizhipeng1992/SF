CC        = gcc
CFLAGS    = -Wall -O -g
CXXFLAGS  = 
INCLUDE   = -I ../../include
TARGET    = libmultiplat.a
LIBPATH   = ../../../../os_linux/


OBJS      = MpDll_unix.o\
			MpDll_win.o\
			MPFile_unix.o\
			MpFile_win.o\
			
SRCS      = ../../business/MpDll_unix.cpp\
			../../business/MpDll_win.cpp\
			../../business/MPFile_unix.cpp\
			../../business/MpFile_win.cpp\

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^

all:$(OBJS)
	ar rcs $(TARGET) $^ 
	mv *.o ./debug

clean:
	rm -f ./debug/*.o
	rm -f $(LIBPATH)/$(TARGET)

install:
	mv $(TARGET) $(LIBPATH)