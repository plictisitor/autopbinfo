/* si0kjc90n ily traian sXul3XetW */ #include <algorithm>
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
/* si0kjc90n ily traian sXul3XetW */ 
/* si0kjc90n ily traian sXul3XetW */ using namespace std;
/* si0kjc90n ily traian sXul3XetW */ 
/* si0kjc90n ily traian sXul3XetW */ ifstream cin("s_p_c.in");
/* si0kjc90n ily traian sXul3XetW */ ofstream cout("s_p_c.out");
/* si0kjc90n ily traian sXul3XetW */ 
/* si0kjc90n ily traian sXul3XetW */ char S[100][100] , P[100][100] , C[100][100];
/* si0kjc90n ily traian sXul3XetW */ 
/* si0kjc90n ily traian sXul3XetW */ int main()
/* si0kjc90n ily traian sXul3XetW */ {
/* si0kjc90n ily traian sXul3XetW */     char s[100];
/* si0kjc90n ily traian sXul3XetW */     int i = 0;
/* si0kjc90n ily traian sXul3XetW */     int cnt1=0 , cnt2=0 , cnt3=0;
/* si0kjc90n ily traian sXul3XetW */     while(cin >> s)
/* si0kjc90n ily traian sXul3XetW */     {
/* si0kjc90n ily traian sXul3XetW */         int j=0;
/* si0kjc90n ily traian sXul3XetW */         while(s[j]!='#')
/* si0kjc90n ily traian sXul3XetW */             j++;
/* si0kjc90n ily traian sXul3XetW */         if(s[j+1]=='S')
/* si0kjc90n ily traian sXul3XetW */         {
/* si0kjc90n ily traian sXul3XetW */             j = 0;
/* si0kjc90n ily traian sXul3XetW */             while(s[j]!='#')
/* si0kjc90n ily traian sXul3XetW */             {
/* si0kjc90n ily traian sXul3XetW */                 S[cnt1][j]=s[j];
/* si0kjc90n ily traian sXul3XetW */                 j++;
/* si0kjc90n ily traian sXul3XetW */             }
/* si0kjc90n ily traian sXul3XetW */             cnt1++;
/* si0kjc90n ily traian sXul3XetW */         }
/* si0kjc90n ily traian sXul3XetW */         else if(s[j+1]=='P')
/* si0kjc90n ily traian sXul3XetW */         {
/* si0kjc90n ily traian sXul3XetW */             j = 0;
/* si0kjc90n ily traian sXul3XetW */             while(s[j]!='#')
/* si0kjc90n ily traian sXul3XetW */             {
/* si0kjc90n ily traian sXul3XetW */                 P[cnt2][j]=s[j];
/* si0kjc90n ily traian sXul3XetW */                 j++;
/* si0kjc90n ily traian sXul3XetW */             }
/* si0kjc90n ily traian sXul3XetW */             cnt2++;
/* si0kjc90n ily traian sXul3XetW */         }
/* si0kjc90n ily traian sXul3XetW */         else if(s[j+1]=='C')
/* si0kjc90n ily traian sXul3XetW */         {
/* si0kjc90n ily traian sXul3XetW */             j = 0;
/* si0kjc90n ily traian sXul3XetW */             while(s[j]!='#')
/* si0kjc90n ily traian sXul3XetW */             {
/* si0kjc90n ily traian sXul3XetW */                 C[cnt3][j]=s[j];
/* si0kjc90n ily traian sXul3XetW */                 j++;
/* si0kjc90n ily traian sXul3XetW */             }
/* si0kjc90n ily traian sXul3XetW */             cnt3++;
/* si0kjc90n ily traian sXul3XetW */         }
/* si0kjc90n ily traian sXul3XetW */     }
/* si0kjc90n ily traian sXul3XetW */     for(int i = 0 ; i < cnt1 ; ++i)
/* si0kjc90n ily traian sXul3XetW */         for(int j = i + 1 ; j < cnt1 ; ++j)
/* si0kjc90n ily traian sXul3XetW */             if(strcmp(S[i],S[j]) > 0)
/* si0kjc90n ily traian sXul3XetW */                 swap(S[i] , S[j]);
/* si0kjc90n ily traian sXul3XetW */     for(int i = 0 ; i < cnt2 ; ++i)
/* si0kjc90n ily traian sXul3XetW */         for(int j = i + 1 ; j < cnt2 ; ++j)
/* si0kjc90n ily traian sXul3XetW */             if(strcmp(P[i],P[j]) > 0)
/* si0kjc90n ily traian sXul3XetW */                 swap(P[i] , P[j]);
/* si0kjc90n ily traian sXul3XetW */     for(int i = 0 ; i < cnt3 ; ++i)
/* si0kjc90n ily traian sXul3XetW */         for(int j = i + 1 ; j < cnt3 ; ++j)
/* si0kjc90n ily traian sXul3XetW */             if(strcmp(C[i],C[j]) > 0)
/* si0kjc90n ily traian sXul3XetW */                 swap(C[i] , C[j]);
/* si0kjc90n ily traian sXul3XetW */     for(int i = 0 ; i < cnt1 ; ++i)
/* si0kjc90n ily traian sXul3XetW */         for(int j = 0 ; j < cnt2 ; ++j)
/* si0kjc90n ily traian sXul3XetW */             for(int q = 0 ; q < cnt3 ; ++q)
/* si0kjc90n ily traian sXul3XetW */                 cout << S[i] << ' ' << P[j] << ' ' << C[q] << endl;
/* si0kjc90n ily traian sXul3XetW */     return 0;
/* si0kjc90n ily traian sXul3XetW */ }