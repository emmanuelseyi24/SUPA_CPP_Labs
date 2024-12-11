CC=g++
FLAGS=-std=c++20 -w
TARGET=AnalyseData
OBJECTS=AnalyseData.o AnalyseFunc.o

${TARGET}:${OBJECTS}
		@echo "Linking..."
		${CC} ${FLAGS} ${OBJECTS} -o ${TARGET}
		@make clean
		

AnalyseData.o : AnalyseData.cpp
		${CC} ${FLAGS} -c AnalyseData.cpp
		
AnalyseFunc.o : AnalyseFunc.cpp
		${CC} ${FLAGS} -c AnalyseFunc.cpp
		
clean: 
		@rm -f *.o *~

cleantarget:
		@rm -f ${TARGET}