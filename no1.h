#include <iostream>

using namespace std;

// Prototype
int *generateArray(int number);
// Declare Global Variable
int length = 10;

int main()
{
  int **array2d = new int*[length];
  for (int i = 0; i < length; i++) {
    array2d[i] = new int[length];
    // array 1d ke 2d
    array2d[i] = generateArray(i + 1);
  }

  // tampilkan 2d Array
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }
}

// Function to generate 1d Array
int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = number * i;
  }

  return numbersList;
}