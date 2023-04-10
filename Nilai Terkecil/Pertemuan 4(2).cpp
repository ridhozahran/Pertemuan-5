#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Cari Nilai Terkecil  ##" << endl;
  cout << "=======================================" << endl;
  cout << endl;

  int input[100], arr_count, i, min_num;

  cout << "Input jumlah element Array: ";
  cin >> arr_count;

  cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
  cout << endl;

  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++){
    cin >> input[i];
  }

  cout << endl;

  min_num = input[0];
  // proses mencari nilai terkecil
  for(i = 1; i < arr_count; i++){
    if(input[i] < min_num){
      min_num = input[i];
    }
  }

  cout  << "Angka terkecil adalah: " << min_num;

  cout << endl;
  return 0;
}
