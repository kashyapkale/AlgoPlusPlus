#include <bits/stdc++.h> 
using namespace std;  
  
// A utility function to swap two elements  
void swap(lli* a, lli* b)  
{  
    lli t = *a;  
    *a = *b;  
    *b = t;  
}  
  
lli partition (lli arr[], lli low, lli high)  
{  
    lli pivot = arr[high]; // pivot  
    lli i = (low - 1); // Index of smaller element  
  
    for (lli j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(lli arr[], lli low, lli high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        lli pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
  
/* Function to print an array */
void printArray(lli arr[], lli size)  
{  
    lli i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  

int main() {
	//vector<lli> v;
	lli N;
	cin>>N;
	//lli v[] = {12,6,32,4,13,9,3,22,27,10};
	lli arr[N];
	
	for(lli i = 0;i<N;i++) 
		cin>>arr[i];

    quickSort(arr,0,N-1);
	for(lli i = 0;i<N;i++) 
		cout<<arr[i]<<" ";

	return 0;
}