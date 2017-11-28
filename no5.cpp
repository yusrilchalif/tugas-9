#include <iostream>

using namespace std;

// Prototype
int *generateArray();
// Declare Global Variable
int length = 15;

int main()
{
  // variabel
  int *array1d = new int[length];

  // memanggil fungsi
  array1d = generateArray();

  // tampilkan array
  for (int i = 0; i < length; i++) {
    cout << array1d[i] << " ";
  }
}

// fungsi umum 1d
int *generateArray()
{
  int *numbersList = new int[length];

  for (int i = 1; i <= length; i++) {
    numbersList[i - 1] = i * 2;
  }

  return numbersList;
}