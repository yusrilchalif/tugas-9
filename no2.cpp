#include <iostream>

using namespace std;

// Prototype
int *generateArray(int number);
// fungsi umum
int length = 10;

int main()
{
  int **array2d = new int*[length];
  for (int i = 0; i < length; i++) {
    array2d[i] = new int[length];
    // simpan array 1d ke 2d
    array2d[i] = generateArray(i + 1);
  }

  // tampilkan array 2d
  for (int i = 1; i <= length; i++) {
    for (int j = 0; j < i; j++) {
      cout << array2d[i - 1][j] << " ";
    }
    cout << endl;
  }
}

// Fungsi umum array 1d
int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = number * i;
  }

  return numbersList;
}