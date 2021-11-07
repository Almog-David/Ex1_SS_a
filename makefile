Basic =basicClassification.o
Loop = advancedClassificationLoop.o
Recurtion = advancedClassificationRecurtion.o
Main = main.o
Flags = -Wall -g

all: maindrec maindloop mains loops

mains: $(Main) libclassrec.a 
	gcc $(Flags) -o mains $(Main) libclassrec.a -lm 

maindloop: $(Main) libclassloops.so
	gcc $(Flags) -o maindloop $(Main) ./libclassloops.so -lm 

maindrec: $(Main) libclassrec.so
	gcc $(Flags) -o maindrec $(Main) ./libclassrec.so -lm

loops: libclassloops.a
libclassloops.a: $(Basic) $(Loop)
	ar -rcs libclassloops.a  $(Basic) $(Loop)

recursives: libclassrec.a
libclassrec.a: $(Basic) $(Recurtion)
	ar -rcs libclassrec.a $(Basic) $(Recurtion)

recursived: libclassrec.so
libclassrec.so: $(Basic) $(Recurtion)
	gcc -shared -o libclassrec.so $(Basic) $(Recurtion)

loopd: libclassloops.so 
libclassloops.so:  $(Basic) $(Loop)
	gcc -shared -o libclassloops.so $(Basic) $(Loop)

basicClassification.o: basicClassification.c NumClass.h
	gcc $(Flags) -c basicClassification.c
	
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(Flags) -c advancedClassificationLoop.c

advancedClassificationRecurtion.o: advancedClassificationRecurtion.c NumClass.h
	gcc $(Flags) -c advancedClassificationRecurtion.c

$(Main): main.c NumClass.h
	gcc $(Flags) -c main.c 
	
.PHONY:clean all
clean:
	rm -f *.o *.a *.so mains maindrec maindloop



