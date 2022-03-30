/* I6lk7qwhC ily traian xIoDIZ5Zx */ #include <algorithm>
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
/* I6lk7qwhC ily traian xIoDIZ5Zx */ using namespace std;
/* I6lk7qwhC ily traian xIoDIZ5Zx */ 
/* I6lk7qwhC ily traian xIoDIZ5Zx */ ifstream cin("paranteze2.in");
/* I6lk7qwhC ily traian xIoDIZ5Zx */ ofstream cout("paranteze2.out");
/* I6lk7qwhC ily traian xIoDIZ5Zx */ 
/* I6lk7qwhC ily traian xIoDIZ5Zx */ int main()
/* I6lk7qwhC ily traian xIoDIZ5Zx */ {
/* I6lk7qwhC ily traian xIoDIZ5Zx */     char ch[300];
/* I6lk7qwhC ily traian xIoDIZ5Zx */     cin >> ch;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     int v[300];
/* I6lk7qwhC ily traian xIoDIZ5Zx */     int i = 0;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     int var=0;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     while(ch[i]!='\0')
/* I6lk7qwhC ily traian xIoDIZ5Zx */     {
/* I6lk7qwhC ily traian xIoDIZ5Zx */         if(ch[i]=='(')
/* I6lk7qwhC ily traian xIoDIZ5Zx */             var++ , v[i]=var;
/* I6lk7qwhC ily traian xIoDIZ5Zx */         else
/* I6lk7qwhC ily traian xIoDIZ5Zx */             v[i]=var , var--;
/* I6lk7qwhC ily traian xIoDIZ5Zx */         i++;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     }
/* I6lk7qwhC ily traian xIoDIZ5Zx */     int max=0;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     for(int j = 0 ; j < i ; ++j)
/* I6lk7qwhC ily traian xIoDIZ5Zx */         if(v[j]>max)
/* I6lk7qwhC ily traian xIoDIZ5Zx */             max=v[j];
/* I6lk7qwhC ily traian xIoDIZ5Zx */     cout << max;
/* I6lk7qwhC ily traian xIoDIZ5Zx */     return 0;
/* I6lk7qwhC ily traian xIoDIZ5Zx */ }