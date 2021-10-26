#include <iostream>
#include <vector>
using namespace std;

// program untuk mengoreksi nilai.
int main(int argc, char const *argv[])
{
  vector<char> kunci;
  vector<char> jawaban;
  int n;
  char a,b,g,q;
  int sum = 0;
  cout << "Masukkan Jumlah Nomor di Soal yang Anda Berikan:";
  cin >> n;
  cout <<"Kunci Jawaban";
  for (int i = 1 ; i <= n ; i++){
    cout << " nomor " << i << ":";
    cin >> a;
    kunci.push_back(a);
  }
  
  cout << "Jawaban Siswa";
  for (int k = 1 ; k <= n ; k++){ 
    cout << " nomor " << k << ":";
    cin >> b;
    jawaban.push_back(b);
  }
  for (int w = 0 ; w < kunci.size() ; w ++){
    if (kunci[w] == jawaban[w]){
        sum += 1;
        }else{
         sum += 0;
        }
      }

  cout << sum;
  
  
  return 0;
}
