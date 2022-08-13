#include <iostream>
using namespace std;
int aray[50];

// Function to get the largest element from an array
int getMax(int aray[], int n) {
  int max = aray[0];
  for (int i = 1; i < n; i++)
    if (aray[i] > max)
      max = aray[i];
  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(int aray[], int size, int place) {
  const int max = 50;
  int output[size];
  int count[50];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  // Calculate count of elements
  for (int i = 0; i < size; i++)
    count[(aray[i] / place) % 10]++;

  // Calculate cumulative count
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

  // Place the elements in sorted order
  for (int i = size - 1; i >= 0; i--) {
    output[count[(aray[i] / place) % 10] - 1] = aray[i];
    count[(aray[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    aray[i] = output[i];
}

// Main function to implement radix sort
void radixsort(int aray[], int size) {
  // Get maximum element
  int max = getMax(aray, size);

  // Apply counting sort to sort elements based on place value.
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(aray, size, place);
}

// Print an array
void printArray(int aray[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << aray[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  
  int n;
    cout << "ENTER THE NUMBER OF ELEMENTS:" << endl;
    cin >> n;

    cout << "ENTER  ELEMENTS:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> aray[i];
    }
    cout << "\nARRAY IN UNSORTED MANNER IS :" << endl;
    printArray(aray,n);
  
  radixsort(aray, n);
  cout << "\nARRAY IN SORTED MANNER IS :" << endl;
  printArray(aray, n);
  return 0;
}
