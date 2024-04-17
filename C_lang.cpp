/*
 * @Author: Bobo
 * @Date:   2023-02-17 17:35:37
 * @Last Modified by:   Bobo
 * @Last Modified time: 2024-02-21 13:41:20
 */
#define LOCAL

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  // Redirect file stream
  #ifdef LOCAL
  freopen("data.in", "r", stdin);
  freopen("data.out", "w", stdout);
  #endif

  // char
  char A = "\101";  // A  OCT
  char B = "\x42";  // B  HEX

  int c = atoi(int_string);
  double d = strtod(float_string, NULL);

  // useful func
  iota(v.begin(), v.end(), 0);

  return 0;
}