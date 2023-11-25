// Importing necessary libraries 
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;



// Function Prototype
void ranArray(int arr[], int size);
void sortArray(int arr[], int size);
void swap(int& x, int& y);                // This swap function will be called within the sort function
void printArray(int arr[], int size);     // Function will print the elements of the array




// Main funciton
int main()
{

  // Declaration of Array
  const int CONST_1 = 10;
  int myArr[10];

  // Intialzing array with 10 random numbers
  ranArray(myArr, 10);

  // Empty Space
  cout << endl;

  // Printing out the unsorted Array
  cout << "Unsorted Array: " << endl;
  printArray(myArr, 10);


    // Empty Space
    cout << endl;

  // Sorting Function to output sorted array in non-decreasing order
  sortArray(myArr, 10);

  // Printing out the Sorted Array
  cout << "Sorted Array: " << endl;
  printArray(myArr, 10);


  return 0;
}


// Function that creates a random array with random integers from 1 to 100
void ranArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = 1 + (rand() % 100);
  }
}

// Function to print Array
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
      cout << arr[i] << " ";
  }
}

// Function to swap values 
void swap(int& x, int& y)
{
  int temp = x;
  x = y;
  y = temp;
}

// Function the final sorts the values 
void sortArray(int arr[], int size)
{
  int min;

  for (int i = 0; i <= size - 2; i++)
  {
    min = arr[i];
    for (int j = i + 1; j <= size - 1; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
      }
    }
      swap(arr[i], min);
   }
}
