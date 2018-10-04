try: main.o GenerateRandomArray/GenerateRandomArray.o InverseOrdinal/InverseOrdinal.o SelectSort/SelectSort.o
	cc -o try main.o GenerateRandomArray/GenerateRandomArray.o InverseOrdinal/InverseOrdinal.o SelectSort/SelectSort.o

main.o: GenerateRandomArray/GenerateRandomArray.h InverseOrdinal/InverseOrdinal.h SelectSort/SelectSort.h
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.h
InverseOrdinal/InverseOrdinal.o: InverseOrdinal/InverseOrdinal.h
SelectSort/SelectSort.o: SelectSort/SelectSort.h

main.o: main.c
	cc -c main.c -o main.o
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.c
	cc -c GenerateRandomArray/GenerateRandomArray.c -o GenerateRandomArray/GenerateRandomArray.o
InverseOrdinal/InverseOrdinal.o: InverseOrdinal/InverseOrdinal.c
	cc -c InverseOrdinal/InverseOrdinal.c -o InverseOrdinal/InverseOrdinal.o
SelectSort/SelectSort.o: SelectSort/SelectSort.c
	cc -c SelectSort/SelectSort.c -o SelectSort/SelectSort.o
clean:
	@rm *.o
	@rm */*.o
