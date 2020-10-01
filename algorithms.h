/* This archive contain the sorting algorithms, on which be used in main for calculate the time of
execution of a array created using a pseudorandom function, to generated the elements in array. */

//The sorting algorithms was retired from GeeksforGeeks site 

/* Simply function to swap elements in BubbleSort and QuickSort */

void swap(int* x, int* y) 
{ 
    int aux = *x; 
    *x = *y; 
    *y = aux; 
}

/* BubbleSort */

void BubbleSort(int array[], int n) 
{ 
   int i, j;

   for (i = 0; i < n-1; i++)        
       for (j = 0; j < n-i-1; j++)
           if (array[j] > array[j+1])
               swap(&array[j], &array[j+1]);            
}

/* InsertionSort */

void InsertionSort(int array[], int n) 
{ 
    int i, j, point; 
    for (i = 1; i < n; i++) 
    { 
        point = array[i]; 
        j = i - 1; 
        while (j >= 0 && array[j] > point) 
        { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = point; 
    } 
}

/* ShellSort */

void ShellSort(int array[], int n) 
{ 
    for (int point = n/2; point > 0; point /= 2)  
        for (int i = point; i < n; i += 1) 
        {  
            int aux = array[i], j; 

            for (j = i; j >= point && array[j - point] > aux; j -= point) 
                array[j] = array[j - point];

            array[j] = aux; 
        } 
} 

/* MergeSort */

void Merge(int array[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = array[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = array[m + 1+ j]; 
  
    i = 0, j = 0, k = l;

    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            array[k] = L[i]; 
            i++; 
        } 
        else
        { 
            array[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        array[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        array[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void MergeSort(int array[], int l, int r) 
{ 
    if (l < r)
    { 
        int m = l+(r-l)/2;

        MergeSort(array, l, m); 
        MergeSort(array, m+1, r); 
        Merge(array, l, m, r); 
    } 
}

/* QuickSort */

int Partition(int array[], int low, int high) 
{ 
    int pivot = array[high]; 
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++) 
    {  
        if (array[j] < pivot) 
        { 
            i++;   
            swap(&array[i], &array[j]); 
        } 
    } 
    swap(&array[i + 1], &array[high]);

    return (i + 1); 
} 

void QuickSort(int array[], int low, int high) 
{ 
    if (low < high) 
    { 
        int index = Partition(array, low, high); 
  
        QuickSort(array, low, index - 1); 
        QuickSort(array, index + 1, high); 
    } 
} 

/* RadixSort */

int GetMax(int array[], int n) 
{ 
    int mx = array[0]; 
    for (int i = 1; i < n; i++) 
        if (array[i] > mx) 
            mx = array[i]; 
    return mx; 
} 
  
void CountSort(int array[], int n, int exp) 
{ 
    int output[n]; 
    int i, count[10] = {0}; 
  
    for (i = 0; i < n; i++) 
        count[ (array[i]/exp)%10 ]++; 
  
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (array[i]/exp)%10 ] - 1] = array[i]; 
        count[ (array[i]/exp)%10 ]--; 
    } 
  
    for (i = 0; i < n; i++) 
        array[i] = output[i]; 
} 
  
void RadixSort(int array[], int n) 
{ 
    int m = GetMax(array, n); 

    for (int exp = 1; m/exp > 0; exp *= 10) 
        CountSort(array, n, exp); 
} 