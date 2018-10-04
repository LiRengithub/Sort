try: main.o GenerateRandomArray/GenerateRandomArray.o InverseOrdinal/InverseOrdinal.o MergeSort/MergeSort.o InsertionSort/InsertionSort.o
	cc -o try main.o GenerateRandomArray/GenerateRandomArray.o InverseOrdinal/InverseOrdinal.o MergeSort/MergeSort.o InsertionSort/InsertionSort.o

main.o: GenerateRandomArray/GenerateRandomArray.h InverseOrdinal/InverseOrdinal.h MergeSort/MergeSort.h InsertionSort/InsertionSort.h
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.h
InverseOrdinal/InverseOrdinal.o: InverseOrdinal/InverseOrdinal.h
MergeSort/MergeSort.o: MergeSort/MergeSort.h InsertionSort/InsertionSort.h
InsertionSort/InsertionSort.o: InsertionSort/InsertionSort.h

main.o: main.c
	cc -c main.c -o main.o
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.c
	cc -c GenerateRandomArray/GenerateRandomArray.c -o GenerateRandomArray/GenerateRandomArray.o
InverseOrdinal/InverseOrdinal.o: InverseOrdinal/InverseOrdinal.c
	cc -c InverseOrdinal/InverseOrdinal.c -o InverseOrdinal/InverseOrdinal.o
MergeSort/MergeSort.o: MergeSort/MergeSort.c
	cc -c MergeSort/MergeSort.c -o MergeSort/MergeSort.o
InsertionSort/InsertionSort.o: InsertionSort/InsertionSort.c
	cc -c InsertionSort/InsertionSort.c -o InsertionSort/InsertionSort.o
clean:
	@rm *.o
	@rm */*.o
