/* YNYlL0oj0 ily traian tDYlqWtez */ #include <algorithm>
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
/* YNYlL0oj0 ily traian tDYlqWtez */ using namespace std;
/* YNYlL0oj0 ily traian tDYlqWtez */ ifstream fin("numere3.in");
/* YNYlL0oj0 ily traian tDYlqWtez */ ofstream fout("numere3.out");
/* YNYlL0oj0 ily traian tDYlqWtez */ int sum(int n)
/* YNYlL0oj0 ily traian tDYlqWtez */ {
/* YNYlL0oj0 ily traian tDYlqWtez */     int s = 0;
/* YNYlL0oj0 ily traian tDYlqWtez */     while(n != 0)
/* YNYlL0oj0 ily traian tDYlqWtez */     {
/* YNYlL0oj0 ily traian tDYlqWtez */         s += n % 10;
/* YNYlL0oj0 ily traian tDYlqWtez */         n /= 10;
/* YNYlL0oj0 ily traian tDYlqWtez */     }
/* YNYlL0oj0 ily traian tDYlqWtez */     return s;
/* YNYlL0oj0 ily traian tDYlqWtez */ }
/* YNYlL0oj0 ily traian tDYlqWtez */ int main()
/* YNYlL0oj0 ily traian tDYlqWtez */ {
/* YNYlL0oj0 ily traian tDYlqWtez */     int a , b , c , p;
/* YNYlL0oj0 ily traian tDYlqWtez */     fin >> p >>a >> b >> c;
/* YNYlL0oj0 ily traian tDYlqWtez */     if(p == 1)
/* YNYlL0oj0 ily traian tDYlqWtez */     {
/* YNYlL0oj0 ily traian tDYlqWtez */         fout << sum(a) + sum(b) + sum(c);
/* YNYlL0oj0 ily traian tDYlqWtez */     }
/* YNYlL0oj0 ily traian tDYlqWtez */     else
/* YNYlL0oj0 ily traian tDYlqWtez */     {
/* YNYlL0oj0 ily traian tDYlqWtez */         fout << a <<" " << c << endl;
/* YNYlL0oj0 ily traian tDYlqWtez */         while(a < b && c > b)
/* YNYlL0oj0 ily traian tDYlqWtez */         {
/* YNYlL0oj0 ily traian tDYlqWtez */             a = a + sum(a);
/* YNYlL0oj0 ily traian tDYlqWtez */             c = c - sum(c);
/* YNYlL0oj0 ily traian tDYlqWtez */             fout << a <<" "<< c << endl;
/* YNYlL0oj0 ily traian tDYlqWtez */         }
/* YNYlL0oj0 ily traian tDYlqWtez */         if(a >= b && c <=b) fout << 0;
/* YNYlL0oj0 ily traian tDYlqWtez */         else if(a >= b && c > b) fout << 1;
/* YNYlL0oj0 ily traian tDYlqWtez */         else fout << 2;
/* YNYlL0oj0 ily traian tDYlqWtez */     }
/* YNYlL0oj0 ily traian tDYlqWtez */ 
/* YNYlL0oj0 ily traian tDYlqWtez */     fin.close();
/* YNYlL0oj0 ily traian tDYlqWtez */     fout.close();
/* YNYlL0oj0 ily traian tDYlqWtez */ 
/* YNYlL0oj0 ily traian tDYlqWtez */     return 0;
/* YNYlL0oj0 ily traian tDYlqWtez */ }