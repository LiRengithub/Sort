try: main.o GenerateRandomArray/GenerateRandomArray.o  MergeSort/MergeSort.o InsertionSort/InsertionSort.o Inversions/Inversions.o
	cc -o try main.o GenerateRandomArray/GenerateRandomArray.o  MergeSort/MergeSort.o InsertionSort/InsertionSort.o Inversions/Inversions.o

main.o: GenerateRandomArray/GenerateRandomArray.h  MergeSort/MergeSort.h InsertionSort/InsertionSort.h Inversions/Inversions.h
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.h
MergeSort/MergeSort.o: MergeSort/MergeSort.h InsertionSort/InsertionSort.h
InsertionSort/InsertionSort.o: InsertionSort/InsertionSort.h
Inversions/Inversions.o: Inversions/Inversions.h

main.o: main.c
	cc -c main.c -o main.o
GenerateRandomArray/GenerateRandomArray.o: GenerateRandomArray/GenerateRandomArray.c
	cc -c GenerateRandomArray/GenerateRandomArray.c -o GenerateRandomArray/GenerateRandomArray.o
MergeSort/MergeSort.o: MergeSort/MergeSort.c
	cc -c MergeSort/MergeSort.c -o MergeSort/MergeSort.o
InsertionSort/InsertionSort.o: InsertionSort/InsertionSort.c
	cc -c InsertionSort/InsertionSort.c -o InsertionSort/InsertionSort.o
Inversions/Inversions.o: Inversions/Inversions.c
	cc -c Inversions/Inversions.c -o Inversions/Inversions.o
clean:
	@rm *.o
	@rm */*.o
