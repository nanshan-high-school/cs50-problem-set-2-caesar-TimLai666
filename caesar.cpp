#include <iostream>
using namespace std;
string lock(int keynum, string sentence);
int main() {
  string sentence;
  cout << "輸入英文";
  cin >> sentence;
  int keynum;
  cout << "輸入密鑰";
  cin >> keynum;
  sentence = lock(keynum, sentence);
  cout << sentence;
}
  
string lock(int keynum, string sentence) {
  for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i]  <= 'Z' && sentence[i] >= 'A') {
      sentence[i] += keynum;
      if (sentence[i] > 'Z') {
        sentence[i] -= 26;
      }
    }else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
      sentence[i] += keynum;
      if (sentence[i] > 'z') {
        sentence[i] -= 26;
      } 
    }
  }
  return sentence;
}
