#include "stdio.h"
#include "stdlib.h"//Malloc
#include "time.h"//Clock & Rand
#include "algorithms.h"

int main(void)
{
    srand((unsigned)time(NULL));//Use time for generate pseudorandom numbers

    int inc, max, stp, rpt;
    int index;//Variable to increment numbers of elements in array, until max using the stp for parameter
    int *array; 
    clock_t start;
    clock_t end;
    double tempo, aux;//Store the times and average times

    puts("Enter with the start value(inc):");
    scanf("%d", &inc);
    puts("Enter with the end value(max):");
    scanf("%d", &max);
    puts("Enter with the interval between the start and end values(stp):");
    scanf("%d", &stp);
    puts("Enter with numbers of repetitions to calculate the time of execution(rpt):");
    scanf("%d", &rpt);//Remember more values more time to calculate but more precise

    printf("n\t Bubble\t \tInsertion\t Shell\t \tMerge\t \tQuick\t \tRadix\t");
    printf("\n---------------------------------------------------------------------------------------------------\n");

    index = inc;
    while(index <= max)
    {
        printf("%d\t", index);
        array = (int*) malloc(index * sizeof(int));//Alocate the space in array for actual value of index

        /* Loops for each sorting algorithm to catch the time of execution, rpt delimit the time of loop */  
        aux = 0;
        for(int i = 0; i < rpt; i++)
        { 
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            BubbleSort(array, index);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;          
        }
        tempo = aux / (double)rpt;
        printf("%lf\t", tempo);

        aux = 0;
        for(int i = 0; i < rpt; i++)
        {
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            InsertionSort(array, index);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;
        }
        tempo = aux / (double)rpt;
        printf("%lf\t", tempo);
        
        aux = 0;
        for(int i = 0; i < rpt; i++)
        {
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            ShellSort(array, index);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;
        }
        tempo = aux / (double)rpt;
        printf("%.6lf\t", tempo);

        aux = 0;
        for(int i = 0; i < rpt; i++)
        {
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            MergeSort(array, 0, index-1);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;
        }
        tempo = aux / (double)rpt;
        printf("%lf\t", tempo);

        aux = 0;
        for(int i = 0; i < rpt; i++)
        {
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            QuickSort(array, 0, index-1);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;
        }
        tempo = aux / (double)rpt;
        printf("%lf\t", tempo);

        aux = 0;
        for(int i = 0; i < rpt; i++)
        {
            for(int i = 0; i < index; i++)
                array[i] = rand() % RAND_MAX;
            start = clock();
            RadixSort(array, index);
            end = clock();
            tempo = ((double)(end-start))/CLOCKS_PER_SEC;
            aux = aux + tempo;
        }
        tempo = aux / (double)rpt;
        printf("%lf\t", tempo);
        printf("\n");

        index += stp;//Increment the value of index until max
    }
    return 0;
}
