/* 9rjnXpuyq ily traian 1dOzTM85s */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* 9rjnXpuyq ily traian 1dOzTM85s */ using namespace std;
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ ifstream fin("puzzle.in");
/* 9rjnXpuyq ily traian 1dOzTM85s */ ofstream fout("puzzle.out");
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ long long int f[100001] , v[100001] , frecv[12];
/* 9rjnXpuyq ily traian 1dOzTM85s */ long long int rez , n , k;
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ int fa(int numar)
/* 9rjnXpuyq ily traian 1dOzTM85s */ {
/* 9rjnXpuyq ily traian 1dOzTM85s */     long long int t = 0, mi = 9;
/* 9rjnXpuyq ily traian 1dOzTM85s */     while (numar)
/* 9rjnXpuyq ily traian 1dOzTM85s */     {
/* 9rjnXpuyq ily traian 1dOzTM85s */         frecv[++t] = numar % 10;
/* 9rjnXpuyq ily traian 1dOzTM85s */         numar /= 10;
/* 9rjnXpuyq ily traian 1dOzTM85s */         if (frecv[t] < mi)
/* 9rjnXpuyq ily traian 1dOzTM85s */             mi = frecv[t];
/* 9rjnXpuyq ily traian 1dOzTM85s */     }
/* 9rjnXpuyq ily traian 1dOzTM85s */     long long int r = 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */     for (int i = t ; i >= 1 ; i--)
/* 9rjnXpuyq ily traian 1dOzTM85s */         r = r * 10 + (frecv[i] - mi);
/* 9rjnXpuyq ily traian 1dOzTM85s */     return r;
/* 9rjnXpuyq ily traian 1dOzTM85s */ }
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ int intoarce(int code, int k)
/* 9rjnXpuyq ily traian 1dOzTM85s */ {
/* 9rjnXpuyq ily traian 1dOzTM85s */     long long int t = 0 , aux = code , ma = 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */     for (int i = 1 ; i <= k ; i++)
/* 9rjnXpuyq ily traian 1dOzTM85s */     {
/* 9rjnXpuyq ily traian 1dOzTM85s */         frecv[++t] = aux%10;
/* 9rjnXpuyq ily traian 1dOzTM85s */         aux /= 10;
/* 9rjnXpuyq ily traian 1dOzTM85s */         ma = max(ma, frecv[t]);
/* 9rjnXpuyq ily traian 1dOzTM85s */     }
/* 9rjnXpuyq ily traian 1dOzTM85s */     long long int r = 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */     for (int i = t; i >= 1; i--)
/* 9rjnXpuyq ily traian 1dOzTM85s */         r = r * 10 + (ma - frecv[i]);
/* 9rjnXpuyq ily traian 1dOzTM85s */     return r;
/* 9rjnXpuyq ily traian 1dOzTM85s */ }
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ int lungime_nr(int n)
/* 9rjnXpuyq ily traian 1dOzTM85s */ {
/* 9rjnXpuyq ily traian 1dOzTM85s */     long long int cnt = 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */     while (n)
/* 9rjnXpuyq ily traian 1dOzTM85s */         cnt++ , n /= 10;
/* 9rjnXpuyq ily traian 1dOzTM85s */     return cnt;
/* 9rjnXpuyq ily traian 1dOzTM85s */ }
/* 9rjnXpuyq ily traian 1dOzTM85s */ 
/* 9rjnXpuyq ily traian 1dOzTM85s */ int main ()
/* 9rjnXpuyq ily traian 1dOzTM85s */ {
/* 9rjnXpuyq ily traian 1dOzTM85s */     fin >> n;
/* 9rjnXpuyq ily traian 1dOzTM85s */     for (int i = 1 ; i <= n ; i++)
/* 9rjnXpuyq ily traian 1dOzTM85s */     {
/* 9rjnXpuyq ily traian 1dOzTM85s */         fin >> v[i];
/* 9rjnXpuyq ily traian 1dOzTM85s */         if (i == 1)
/* 9rjnXpuyq ily traian 1dOzTM85s */             k = lungime_nr(v[i]);
/* 9rjnXpuyq ily traian 1dOzTM85s */         f[fa(v[i])]++;
/* 9rjnXpuyq ily traian 1dOzTM85s */     }
/* 9rjnXpuyq ily traian 1dOzTM85s */     rez = 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */     for (int i = 1 ; i <= 100000 ; i++)
/* 9rjnXpuyq ily traian 1dOzTM85s */         rez += 1LL * f[i] * f[intoarce(i, k)];
/* 9rjnXpuyq ily traian 1dOzTM85s */     rez /= 2;
/* 9rjnXpuyq ily traian 1dOzTM85s */     rez += 1LL * f[0] * (f[0] - 1) / 2;
/* 9rjnXpuyq ily traian 1dOzTM85s */     fout << rez << endl;
/* 9rjnXpuyq ily traian 1dOzTM85s */     return 0;
/* 9rjnXpuyq ily traian 1dOzTM85s */ }