/* 4o8eC0fqu ily traian AtEQckChq */ #include <algorithm>
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
/* 4o8eC0fqu ily traian AtEQckChq */ using namespace std;
/* 4o8eC0fqu ily traian AtEQckChq */ 
/* 4o8eC0fqu ily traian AtEQckChq */ ifstream cin("sumpow2.in");
/* 4o8eC0fqu ily traian AtEQckChq */ ofstream cout("sumpow2.out");
/* 4o8eC0fqu ily traian AtEQckChq */ 
/* 4o8eC0fqu ily traian AtEQckChq */ int f[27];
/* 4o8eC0fqu ily traian AtEQckChq */ 
/* 4o8eC0fqu ily traian AtEQckChq */ int main()
/* 4o8eC0fqu ily traian AtEQckChq */ {
/* 4o8eC0fqu ily traian AtEQckChq */     char s1[200] , s2[200];
/* 4o8eC0fqu ily traian AtEQckChq */     cin >> s1 >> s2;
/* 4o8eC0fqu ily traian AtEQckChq */     int i = 0;
/* 4o8eC0fqu ily traian AtEQckChq */     while(s1[i]!='\0')
/* 4o8eC0fqu ily traian AtEQckChq */     {
/* 4o8eC0fqu ily traian AtEQckChq */         f[(int)s1[i]-96]++;
/* 4o8eC0fqu ily traian AtEQckChq */         i++;
/* 4o8eC0fqu ily traian AtEQckChq */     }
/* 4o8eC0fqu ily traian AtEQckChq */     i=0;
/* 4o8eC0fqu ily traian AtEQckChq */     while(s2[i]!='\0')
/* 4o8eC0fqu ily traian AtEQckChq */     {
/* 4o8eC0fqu ily traian AtEQckChq */         f[(int)s2[i]-96]++;
/* 4o8eC0fqu ily traian AtEQckChq */         i++;
/* 4o8eC0fqu ily traian AtEQckChq */     }
/* 4o8eC0fqu ily traian AtEQckChq */     for(int i = 0 ; i < 25 ; ++i)
/* 4o8eC0fqu ily traian AtEQckChq */     {
/* 4o8eC0fqu ily traian AtEQckChq */         while(f[i]-2 >= 0)
/* 4o8eC0fqu ily traian AtEQckChq */             f[i]-=2 , f[i+1]++;
/* 4o8eC0fqu ily traian AtEQckChq */         if(f[i]==1)
/* 4o8eC0fqu ily traian AtEQckChq */             cout << (char)(i + 96);
/* 4o8eC0fqu ily traian AtEQckChq */     }
/* 4o8eC0fqu ily traian AtEQckChq */     for(int i = 0 ; i < f[25] ; ++i)
/* 4o8eC0fqu ily traian AtEQckChq */         cout << 'z';
/* 4o8eC0fqu ily traian AtEQckChq */     return 0;
/* 4o8eC0fqu ily traian AtEQckChq */ }