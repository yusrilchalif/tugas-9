#include <iostream>

using namespace std;

// Prototype
int *mirror(int number, int length);
int *generateArray(int number, int length);

int main()
{
  // variabel
  int *numbers, value = 0;

  // tampilan variabel
  cout << "Masukkan Nilai N = ";
  cin >> value;

  int length = (2 * value) - 1, **array2d = new int*[length];

  numbers = mirror(value, length);

  for (int i = 0; i < length; i++) {
    array2d[i] = new int[length];
    // 1d ke 2d
    array2d[i] = generateArray(numbers[i], length);
  }

  // tampilkan array
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << array2d[i][j] << " ";
    }
    cout << endl;
  }
}

// fungsi invert angka
int *mirror(int number, int length)
{
  int *numbersList = new int[length];
  int temp = number;

  for (int i = 0; i < length; i++) {
    numbersList[i] = (i < number - 1) ? temp-- : temp++;
  }

  return numbersList;
}

// Funcgsi array 1d
int *generateArray(int number, int length)
{
  int *numbersList = new int[length];

  for (int i = 0; i < length; i++) {
    numbersList[i] = number;
  }

  return numbersList;
}
}