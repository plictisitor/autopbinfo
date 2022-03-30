/* IA5TxaTv4 ily traian 6NfnTkFzL */ #include <algorithm>
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
/* IA5TxaTv4 ily traian 6NfnTkFzL */ using namespace std;
/* IA5TxaTv4 ily traian 6NfnTkFzL */ 
/* IA5TxaTv4 ily traian 6NfnTkFzL */ ifstream fin("vapoare.in");
/* IA5TxaTv4 ily traian 6NfnTkFzL */ ofstream fout("vapoare.out");
/* IA5TxaTv4 ily traian 6NfnTkFzL */ 
/* IA5TxaTv4 ily traian 6NfnTkFzL */ int main()
/* IA5TxaTv4 ily traian 6NfnTkFzL */ {
/* IA5TxaTv4 ily traian 6NfnTkFzL */     int n,m;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     fin >> n >> m;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     int z1 , z2;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     fin >> z1 >> z2;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     long long int a = n*2*7+z1;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     long long int b = m*2*7+z2;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     long long int ca=a;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     long long int cb=b;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     while(b)
/* IA5TxaTv4 ily traian 6NfnTkFzL */     {
/* IA5TxaTv4 ily traian 6NfnTkFzL */         int r=a%b;
/* IA5TxaTv4 ily traian 6NfnTkFzL */         a=b;
/* IA5TxaTv4 ily traian 6NfnTkFzL */         b=r;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     }
/* IA5TxaTv4 ily traian 6NfnTkFzL */     fout << ca/a*cb;
/* IA5TxaTv4 ily traian 6NfnTkFzL */     
/* IA5TxaTv4 ily traian 6NfnTkFzL */     fin.close();
/* IA5TxaTv4 ily traian 6NfnTkFzL */     fout.close();
/* IA5TxaTv4 ily traian 6NfnTkFzL */     
/* IA5TxaTv4 ily traian 6NfnTkFzL */     return 0;
/* IA5TxaTv4 ily traian 6NfnTkFzL */ }