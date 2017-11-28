#include <iostream>

using namespace std;

// Prototype
int **generatePattern(int number, int length);

int main()
{
  // Variabel
  int value = 0, **numbersList;

  // masukan user
  cout << "Masukkan Nilai Pattern = ";
  cin >> value;

  int length = (2 * value) - 1;

  // memanggil fungsi
  numbersList = generatePattern(value, length);

  // tampilkan pattern
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      cout << numbersList[i][j];
    }
    cout << endl;
  }

}

// Fungsi patern
int **generatePattern(int number, int length)
{
  /*
    index = index untuk array2d
    tempIndex = index untuk temp
  */
  int index = 0, tempIndex = 0;
  int **array2d = new int*[length];

  for (int i = number; i >= 1; i--)
  {
    int *temp = new int[length], tempIndex = 0;
    array2d[index] = new int[length];

    // masukkan pertama
    for(int j = number; j > i; j--)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // masukkan kedua
    for(int j = 1; j <= (i*2-1); j++)
    {
        temp[tempIndex] = i;
        tempIndex++;
    }

    // masukkan ketiga
    for(int j = i + 1; j <= number; j++)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // menyimpan data ke array
    array2d[index] = temp;
    index++;
  }

  // data kedua 
  for(int i = 1; i < number; i++)
  {
    int *temp = new int[length], tempIndex = 0;
    array2d[index] = new int[length];

    // masukkan pertama 
    for(int j = number; j > i; j--)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // masukkan kedua
    for(int j = 1; j <= (i*2-1); j++)
    {
        temp[tempIndex] = i + 1;
        tempIndex++;
    }

    // masukkan ketiga
    for(int j = i + 1; j <= number; j++)
    {
        temp[tempIndex] = j;
        tempIndex++;
    }

    // simpan temp ke array 2d
    array2d[index] = temp;
    index++;
  }

  return array2d;
}