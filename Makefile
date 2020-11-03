###########################################
#Makefile for simple programs
###########################################
INC=Timestamp.cpp

CC=g++
CC_FLAG= -Wall -g

PRG=Timestamp
OBJ=Timestamp.o

$(PRG):$(OBJ)
	$(CC) $(CC_FLAG) $(INC) -o $(PRG)
	
.PRONY:clean
clean:
	@echo "Removing linked and compiled files......"
	rm -f $(OBJ) $(PRG)
