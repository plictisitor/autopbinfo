/* HS6n0X5wK ily traian HuWiYWLgt */ #include <algorithm>
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
/* HS6n0X5wK ily traian HuWiYWLgt */ 
/* HS6n0X5wK ily traian HuWiYWLgt */ using namespace std;
/* HS6n0X5wK ily traian HuWiYWLgt */ 
/* HS6n0X5wK ily traian HuWiYWLgt */ ifstream cin("rime.in");
/* HS6n0X5wK ily traian HuWiYWLgt */ ofstream cout("rime.out");
/* HS6n0X5wK ily traian HuWiYWLgt */ 
/* HS6n0X5wK ily traian HuWiYWLgt */ char m[501][21];
/* HS6n0X5wK ily traian HuWiYWLgt */ char suf[501][10];
/* HS6n0X5wK ily traian HuWiYWLgt */ 
/* HS6n0X5wK ily traian HuWiYWLgt */ int main()
/* HS6n0X5wK ily traian HuWiYWLgt */ {
/* HS6n0X5wK ily traian HuWiYWLgt */     int n;
/* HS6n0X5wK ily traian HuWiYWLgt */     cin >> n;
/* HS6n0X5wK ily traian HuWiYWLgt */     for(int i = 1 ; i <= n ; ++i)
/* HS6n0X5wK ily traian HuWiYWLgt */     {
/* HS6n0X5wK ily traian HuWiYWLgt */         cin >> m[i];
/* HS6n0X5wK ily traian HuWiYWLgt */         int j = strlen(m[i]);
/* HS6n0X5wK ily traian HuWiYWLgt */         j--;
/* HS6n0X5wK ily traian HuWiYWLgt */         while(!strchr("qwertyuiopasdfghjklzxcvbnm" , m[i][j]) && j >= 0)
/* HS6n0X5wK ily traian HuWiYWLgt */             j--;
/* HS6n0X5wK ily traian HuWiYWLgt */         if(m[i][j]<=0)
/* HS6n0X5wK ily traian HuWiYWLgt */             i--;
/* HS6n0X5wK ily traian HuWiYWLgt */         else
/* HS6n0X5wK ily traian HuWiYWLgt */         j++ , m[i][j]='\0';
/* HS6n0X5wK ily traian HuWiYWLgt */     }
/* HS6n0X5wK ily traian HuWiYWLgt */     for(int i = 1 ; i < n ; ++i)
/* HS6n0X5wK ily traian HuWiYWLgt */         for(int j = i+1 ; j <= n ; ++j)
/* HS6n0X5wK ily traian HuWiYWLgt */             if(strcmp(m[i] , m[j]) > 0)
/* HS6n0X5wK ily traian HuWiYWLgt */                 swap(m[i] , m[j]);
/* HS6n0X5wK ily traian HuWiYWLgt */     for(int i = 1 ; i <= n ; ++i)
/* HS6n0X5wK ily traian HuWiYWLgt */     {
/* HS6n0X5wK ily traian HuWiYWLgt */         int x = strlen(m[i]);
/* HS6n0X5wK ily traian HuWiYWLgt */         int j = strlen(m[i]);
/* HS6n0X5wK ily traian HuWiYWLgt */         j--;
/* HS6n0X5wK ily traian HuWiYWLgt */         if(strchr("aeiou" , m[i][j]))
/* HS6n0X5wK ily traian HuWiYWLgt */         {
/* HS6n0X5wK ily traian HuWiYWLgt */             if(strlen(m[i]) > 1)
/* HS6n0X5wK ily traian HuWiYWLgt */                 j--;
/* HS6n0X5wK ily traian HuWiYWLgt */             while(!strchr("aeiou" , m[i][j]) && j > 0)
/* HS6n0X5wK ily traian HuWiYWLgt */                 j--;
/* HS6n0X5wK ily traian HuWiYWLgt */             int q = 0;
/* HS6n0X5wK ily traian HuWiYWLgt */             for(int k = j ; k < x ; ++k)
/* HS6n0X5wK ily traian HuWiYWLgt */                 suf[i][q] = m[i][k] , q++;
/* HS6n0X5wK ily traian HuWiYWLgt */             suf[i][q]='\0';
/* HS6n0X5wK ily traian HuWiYWLgt */         }
/* HS6n0X5wK ily traian HuWiYWLgt */         else
/* HS6n0X5wK ily traian HuWiYWLgt */         {
/* HS6n0X5wK ily traian HuWiYWLgt */             if(strlen(m[i]) > 1)
/* HS6n0X5wK ily traian HuWiYWLgt */                 j--;
/* HS6n0X5wK ily traian HuWiYWLgt */             while(!strchr("aeiou" , m[i][j]) && j > 0)
/* HS6n0X5wK ily traian HuWiYWLgt */                 j--;
/* HS6n0X5wK ily traian HuWiYWLgt */             int q = 0;
/* HS6n0X5wK ily traian HuWiYWLgt */             for(int k = j ; k < x ; ++k)
/* HS6n0X5wK ily traian HuWiYWLgt */                 suf[i][q]=m[i][k] , q++;
/* HS6n0X5wK ily traian HuWiYWLgt */             suf[i][q]='\0';
/* HS6n0X5wK ily traian HuWiYWLgt */         }
/* HS6n0X5wK ily traian HuWiYWLgt */     }
/* HS6n0X5wK ily traian HuWiYWLgt */     int cnt = 0;
/* HS6n0X5wK ily traian HuWiYWLgt */     for(int i = 1 ; i <= n ; ++i)
/* HS6n0X5wK ily traian HuWiYWLgt */     {
/* HS6n0X5wK ily traian HuWiYWLgt */         bool ok = true;
/* HS6n0X5wK ily traian HuWiYWLgt */         for(int j = i+1 ; j <= n ; ++j)
/* HS6n0X5wK ily traian HuWiYWLgt */             if(strcmp(suf[i] , suf[j])==0)
/* HS6n0X5wK ily traian HuWiYWLgt */                 ok=false;
/* HS6n0X5wK ily traian HuWiYWLgt */         if(ok)
/* HS6n0X5wK ily traian HuWiYWLgt */             cnt++;
/* HS6n0X5wK ily traian HuWiYWLgt */     }
/* HS6n0X5wK ily traian HuWiYWLgt */     cout << cnt << '\n';
/* HS6n0X5wK ily traian HuWiYWLgt */     for(int i = 1 ; i <= n ; ++i)
/* HS6n0X5wK ily traian HuWiYWLgt */     {
/* HS6n0X5wK ily traian HuWiYWLgt */         if(suf[i][0]!='0')
/* HS6n0X5wK ily traian HuWiYWLgt */         {
/* HS6n0X5wK ily traian HuWiYWLgt */             cout << m[i] << ' ';
/* HS6n0X5wK ily traian HuWiYWLgt */             for(int j = i + 1 ; j <= n ; ++j)
/* HS6n0X5wK ily traian HuWiYWLgt */                 if(strcmp(suf[i] , suf[j]) == 0)
/* HS6n0X5wK ily traian HuWiYWLgt */                     cout << m[j] << ' ' , suf[j][0]='0';
/* HS6n0X5wK ily traian HuWiYWLgt */             cout << endl;
/* HS6n0X5wK ily traian HuWiYWLgt */         }
/* HS6n0X5wK ily traian HuWiYWLgt */     }
/* HS6n0X5wK ily traian HuWiYWLgt */     return 0;
/* HS6n0X5wK ily traian HuWiYWLgt */ }