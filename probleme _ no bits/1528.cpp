/* 76ZXdmsAT ily traian JIcd8h1FC */ #include <algorithm>
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
/* 76ZXdmsAT ily traian JIcd8h1FC */ using namespace std;
/* 76ZXdmsAT ily traian JIcd8h1FC */ ifstream cin("operatiimatematice.in");
/* 76ZXdmsAT ily traian JIcd8h1FC */ ofstream cout("operatiimatematice.out");
/* 76ZXdmsAT ily traian JIcd8h1FC */ unsigned long R = 0;
/* 76ZXdmsAT ily traian JIcd8h1FC */ void impartire_pe_nr_mari(int A[], unsigned long X)
/* 76ZXdmsAT ily traian JIcd8h1FC */ {
/* 76ZXdmsAT ily traian JIcd8h1FC */     int i;
/* 76ZXdmsAT ily traian JIcd8h1FC */     for(i = A[0] ; i ; i--)
/* 76ZXdmsAT ily traian JIcd8h1FC */     {
/* 76ZXdmsAT ily traian JIcd8h1FC */         A[i] = (R = 10 * R + A[i]) / X;
/* 76ZXdmsAT ily traian JIcd8h1FC */         R %= X;
/* 76ZXdmsAT ily traian JIcd8h1FC */     }
/* 76ZXdmsAT ily traian JIcd8h1FC */     while(!A[A[0]] && A[0]>1) A[0]--;
/* 76ZXdmsAT ily traian JIcd8h1FC */ }
/* 76ZXdmsAT ily traian JIcd8h1FC */ int main()
/* 76ZXdmsAT ily traian JIcd8h1FC */ {
/* 76ZXdmsAT ily traian JIcd8h1FC */     int n , a[100] , sum , b[100];
/* 76ZXdmsAT ily traian JIcd8h1FC */     cin >> n;
/* 76ZXdmsAT ily traian JIcd8h1FC */     for(int i = 0 ; i < n ; i++)
/* 76ZXdmsAT ily traian JIcd8h1FC */         cin >> a[i];
/* 76ZXdmsAT ily traian JIcd8h1FC */     for(int i = n - 1 ; i >= 0 ; i--)
/* 76ZXdmsAT ily traian JIcd8h1FC */         b[i] = a[n - i - 1];
/* 76ZXdmsAT ily traian JIcd8h1FC */     int rez = a[0];
/* 76ZXdmsAT ily traian JIcd8h1FC */     int i = 0;
/* 76ZXdmsAT ily traian JIcd8h1FC */     while(i < n -1)
/* 76ZXdmsAT ily traian JIcd8h1FC */     {
/* 76ZXdmsAT ily traian JIcd8h1FC */         i++;
/* 76ZXdmsAT ily traian JIcd8h1FC */         rez *= 3;
/* 76ZXdmsAT ily traian JIcd8h1FC */         rez += a[i];
/* 76ZXdmsAT ily traian JIcd8h1FC */         int aux = rez - 1;
/* 76ZXdmsAT ily traian JIcd8h1FC */         while(aux % 7 != 0) aux--;
/* 76ZXdmsAT ily traian JIcd8h1FC */         sum = aux;
/* 76ZXdmsAT ily traian JIcd8h1FC */         rez -= aux;
/* 76ZXdmsAT ily traian JIcd8h1FC */     }
/* 76ZXdmsAT ily traian JIcd8h1FC */     cout << rez + sum << '\n';
/* 76ZXdmsAT ily traian JIcd8h1FC */     if(rez + sum == 6) cout << "NU";
/* 76ZXdmsAT ily traian JIcd8h1FC */     else
/* 76ZXdmsAT ily traian JIcd8h1FC */     {
/* 76ZXdmsAT ily traian JIcd8h1FC */         impartire_pe_nr_mari(b , 7);
/* 76ZXdmsAT ily traian JIcd8h1FC */         if(R == 0) cout << "DA";
/* 76ZXdmsAT ily traian JIcd8h1FC */         else cout << "NU";
/* 76ZXdmsAT ily traian JIcd8h1FC */     }
/* 76ZXdmsAT ily traian JIcd8h1FC */ 
/* 76ZXdmsAT ily traian JIcd8h1FC */ }