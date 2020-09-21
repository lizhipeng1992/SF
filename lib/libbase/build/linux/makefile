CC        = gcc
CFLAGS    = -Wall -O -g
CXXFLAGS  = 
INCLUDE   = -I ../../include -I ../../include/json/
TARGET    = libbase.a
LIBPATH   = ../../../../os_linux/


OBJS      = ObjectBase.o\
			ProtoImpl.o\
			EString.o\
			Json.o\
			FileCfg.o\
			json_reader.o\
			json_value.o\
			json_writer.o
			
SRCS      = ../../business/ObjectBase.cpp\
			../../business/ProtoImpl.cpp\
			../../business/EString.cpp\
			../../business/Json.cpp\
			../../business/FileCfg.cpp\
			../../business/json/json_reader.cpp\
			../../business/json/json_value.cpp\
			../../business/json/json_writer.cpp

$(OBJS):$(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $^

all:$(OBJS)
	ar rcs $(TARGET) $^ 
	mv *.o ./debug
	mv $(TARGET) $(LIBPATH)

clean:
	rm -f *.o
	rm -f $(LIBPATH)/$(TARGET)