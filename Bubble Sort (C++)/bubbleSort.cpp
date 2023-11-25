// Inclusion of necassary libraries
#include <iostream>
using namespace std;



// Function Prototype
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);
void swap(int& j, int& k);




// Main Function
int main()
{



  // Declaring Array
  const int CONST_1 = 7;
  int arr[CONST_1] = {2, 8, 5, 3, 9, 4, 1};

  // Unsorted Array
  cout << "Unsorted Array: " << endl;
  printArray(arr, CONST_1);

  // Empty Space
  cout << endl;

  // Sorted Array
  cout << "Sorted Array: " << endl;
  bubbleSort(arr, CONST_1);
  printArray(arr, CONST_1);


  return 0;
}

// Bubble Sort function with two parameters
void bubbleSort(int arr[], int size)
{
  for (int i = 0; i <= size - 2; i++)
  {
    for (int j = 0; j <= size - 2 - i; j++)
    {
      if (arr[j+1] < arr[j])
      {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

// Printing of Array 
void printArray(int arr[], int size)
{

    // Printing Array
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
}

// Random swap function which allows auser to swap the values of two different variables with the use of references
void swap(int& j, int& k)
{
  int temp = j;
  j = k;
  k = temp;

}
