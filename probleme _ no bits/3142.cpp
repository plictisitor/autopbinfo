/* cVjvfzZC7 ily traian Hn999UyhW */ #include <algorithm>
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
/* cVjvfzZC7 ily traian Hn999UyhW */ using namespace std;
/* cVjvfzZC7 ily traian Hn999UyhW */ 
/* cVjvfzZC7 ily traian Hn999UyhW */ ifstream cin("polybius.in");
/* cVjvfzZC7 ily traian Hn999UyhW */ ofstream cout("polybius.out");
/* cVjvfzZC7 ily traian Hn999UyhW */ 
/* cVjvfzZC7 ily traian Hn999UyhW */ char mat[6][6];
/* cVjvfzZC7 ily traian Hn999UyhW */ int cer;
/* cVjvfzZC7 ily traian Hn999UyhW */ 
/* cVjvfzZC7 ily traian Hn999UyhW */ int main()
/* cVjvfzZC7 ily traian Hn999UyhW */ {
/* cVjvfzZC7 ily traian Hn999UyhW */     cin >> cer;
/* cVjvfzZC7 ily traian Hn999UyhW */     char a[30];
/* cVjvfzZC7 ily traian Hn999UyhW */     cin >> a;
/* cVjvfzZC7 ily traian Hn999UyhW */     int k = 0;
/* cVjvfzZC7 ily traian Hn999UyhW */     for(int i = 1; i <= 5; ++i)
/* cVjvfzZC7 ily traian Hn999UyhW */         for(int j = 1 ; j <= 5; ++j){
/* cVjvfzZC7 ily traian Hn999UyhW */             while(a[k] == ' ')
/* cVjvfzZC7 ily traian Hn999UyhW */                 k++;
/* cVjvfzZC7 ily traian Hn999UyhW */             mat[i][j] = a[k];
/* cVjvfzZC7 ily traian Hn999UyhW */             k++;
/* cVjvfzZC7 ily traian Hn999UyhW */         }
/* cVjvfzZC7 ily traian Hn999UyhW */     cin.get();
/* cVjvfzZC7 ily traian Hn999UyhW */     int X[30];
/* cVjvfzZC7 ily traian Hn999UyhW */     if(cer == 2){
/* cVjvfzZC7 ily traian Hn999UyhW */         char a, b;
/* cVjvfzZC7 ily traian Hn999UyhW */         while(cin >> a >> b)
/* cVjvfzZC7 ily traian Hn999UyhW */             cout << mat[a-'0'][b-'0'];
/* cVjvfzZC7 ily traian Hn999UyhW */     }
/* cVjvfzZC7 ily traian Hn999UyhW */     else{
/* cVjvfzZC7 ily traian Hn999UyhW */         char ch;
/* cVjvfzZC7 ily traian Hn999UyhW */         for(int i = 1 ; i <= 5; ++i)
/* cVjvfzZC7 ily traian Hn999UyhW */             for(int j = 1 ; j <= 5; ++j)
/* cVjvfzZC7 ily traian Hn999UyhW */                 X[mat[i][j]-'A'] = i * 10 + j;
/* cVjvfzZC7 ily traian Hn999UyhW */         while(cin >> ch)
/* cVjvfzZC7 ily traian Hn999UyhW */                 cout << X[ch-'A'];
/* cVjvfzZC7 ily traian Hn999UyhW */     }
/* cVjvfzZC7 ily traian Hn999UyhW */     return 0;
/* cVjvfzZC7 ily traian Hn999UyhW */ }