/* 5CAlGMEGV ily traian la8pU8wIn */ #include <algorithm>
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
/* 5CAlGMEGV ily traian la8pU8wIn */ 
/* 5CAlGMEGV ily traian la8pU8wIn */ using namespace std;
/* 5CAlGMEGV ily traian la8pU8wIn */ ifstream fin("cifre15.in");
/* 5CAlGMEGV ily traian la8pU8wIn */ ofstream fout("cifre15.out");
/* 5CAlGMEGV ily traian la8pU8wIn */ 
/* 5CAlGMEGV ily traian la8pU8wIn */ int main()
/* 5CAlGMEGV ily traian la8pU8wIn */ {
/* 5CAlGMEGV ily traian la8pU8wIn */     int n;
/* 5CAlGMEGV ily traian la8pU8wIn */     fin >> n;
/* 5CAlGMEGV ily traian la8pU8wIn */     int d2 = 0, d5 = 0, p = 1 , m , k;
/* 5CAlGMEGV ily traian la8pU8wIn */     for(int i = 1 ; i<=n ; ++i)
/* 5CAlGMEGV ily traian la8pU8wIn */     {
/* 5CAlGMEGV ily traian la8pU8wIn */         fin >> m;
/* 5CAlGMEGV ily traian la8pU8wIn */         while(m % 5 == 0)
/* 5CAlGMEGV ily traian la8pU8wIn */             m /= 5, d5++;
/* 5CAlGMEGV ily traian la8pU8wIn */         while(m % 2 == 0)
/* 5CAlGMEGV ily traian la8pU8wIn */             m /= 2, d2++;
/* 5CAlGMEGV ily traian la8pU8wIn */         p = p * (m%10) % 10;
/* 5CAlGMEGV ily traian la8pU8wIn */     }
/* 5CAlGMEGV ily traian la8pU8wIn */     fout << min(d2,d5)<<" ";
/* 5CAlGMEGV ily traian la8pU8wIn */     if(d2 > d5)
/* 5CAlGMEGV ily traian la8pU8wIn */     {
/* 5CAlGMEGV ily traian la8pU8wIn */         k = d2 - d5;
/* 5CAlGMEGV ily traian la8pU8wIn */         for(int i=1;i<=k;++i)
/* 5CAlGMEGV ily traian la8pU8wIn */             p = (p*2) % 10;
/* 5CAlGMEGV ily traian la8pU8wIn */     }
/* 5CAlGMEGV ily traian la8pU8wIn */     else if(d5 >= d2)
/* 5CAlGMEGV ily traian la8pU8wIn */     {
/* 5CAlGMEGV ily traian la8pU8wIn */         k = d5 - d2;
/* 5CAlGMEGV ily traian la8pU8wIn */         for(int i=1;i<=k;++i)
/* 5CAlGMEGV ily traian la8pU8wIn */             p = (p*5) % 10;
/* 5CAlGMEGV ily traian la8pU8wIn */     }
/* 5CAlGMEGV ily traian la8pU8wIn */     fout << p;
/* 5CAlGMEGV ily traian la8pU8wIn */ 
/* 5CAlGMEGV ily traian la8pU8wIn */     fin.close();
/* 5CAlGMEGV ily traian la8pU8wIn */     fout.close();
/* 5CAlGMEGV ily traian la8pU8wIn */     
/* 5CAlGMEGV ily traian la8pU8wIn */     return 0;
/* 5CAlGMEGV ily traian la8pU8wIn */ }