// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int large = i; // Initialize large as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[large])
		large = l;

	// If right child is larger than large so far
	if (r < n && arr[r] > arr[large])
		large = r;

	// If large is not root
	if (large != i) {
		swap(arr[i], arr[large]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, large);
	}
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver program
int main()
{
	int arr[5];
    cout<<"Enter 5 integer in any order : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
	int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting array is \n";
	printArray(arr, n);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
