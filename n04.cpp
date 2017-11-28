#include <iostream>

using namespace std;

// Prototype
int *generateArray(int number);
// variabel umum
int length = 5;

int main()
{
  int **array2d = new int*[length];
  for (int i = 1; i <= length; i++) {
    array2d[i - 1] = new int[length];
    /*
      1d ke 2d
      rumus = i + 1 ( karna dimulai dari 2 )
    */
    array2d[i - 1] = generateArray(i + 1);
  }

  // tampilkan array 2d
  for (int i = 1; i <= length; i++) {
    for (int j = 0; j < length; j++) {
      cout << array2d[i - 1][j] << " ";
    }
    cout << endl;
  }
}

// Fungsi 1d
int *generateArray(int number)
{
  int *numbersList = new int[length];

  for (int i = 0; i < length; i++) {
    numbersList[i] = number + i;
  }

  return numbersList;
}	 	 	 	 	