/* 7xCovwebg ily traian HtA1kV48F */ #include <algorithm>
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
/* 7xCovwebg ily traian HtA1kV48F */ 
/* 7xCovwebg ily traian HtA1kV48F */ using namespace std;
/* 7xCovwebg ily traian HtA1kV48F */ 
/* 7xCovwebg ily traian HtA1kV48F */ ifstream cin("s_p_c_2.in");
/* 7xCovwebg ily traian HtA1kV48F */ ofstream cout("s_p_c_2.out");
/* 7xCovwebg ily traian HtA1kV48F */ 
/* 7xCovwebg ily traian HtA1kV48F */ char S[100][100] , P[100][100] , C[100][100];
/* 7xCovwebg ily traian HtA1kV48F */ 
/* 7xCovwebg ily traian HtA1kV48F */ int main()
/* 7xCovwebg ily traian HtA1kV48F */ {
/* 7xCovwebg ily traian HtA1kV48F */     char s[100];
/* 7xCovwebg ily traian HtA1kV48F */     int i = 0;
/* 7xCovwebg ily traian HtA1kV48F */     int cnt1=0 , cnt2=0 , cnt3=0;
/* 7xCovwebg ily traian HtA1kV48F */     while(cin >> s)
/* 7xCovwebg ily traian HtA1kV48F */     {
/* 7xCovwebg ily traian HtA1kV48F */         if(s[0]=='S')
/* 7xCovwebg ily traian HtA1kV48F */         {
/* 7xCovwebg ily traian HtA1kV48F */             int j = 2;
/* 7xCovwebg ily traian HtA1kV48F */             while(s[j]!=' ')
/* 7xCovwebg ily traian HtA1kV48F */             {
/* 7xCovwebg ily traian HtA1kV48F */                 S[cnt1][j-2]=s[j];
/* 7xCovwebg ily traian HtA1kV48F */                 j++;
/* 7xCovwebg ily traian HtA1kV48F */             }
/* 7xCovwebg ily traian HtA1kV48F */             cnt1++;
/* 7xCovwebg ily traian HtA1kV48F */         }
/* 7xCovwebg ily traian HtA1kV48F */         else if(s[0]=='P')
/* 7xCovwebg ily traian HtA1kV48F */         {
/* 7xCovwebg ily traian HtA1kV48F */             int j = 2;
/* 7xCovwebg ily traian HtA1kV48F */             while(s[j]!=' ')
/* 7xCovwebg ily traian HtA1kV48F */             {
/* 7xCovwebg ily traian HtA1kV48F */                 P[cnt2][j-2]=s[j];
/* 7xCovwebg ily traian HtA1kV48F */                 j++;
/* 7xCovwebg ily traian HtA1kV48F */             }
/* 7xCovwebg ily traian HtA1kV48F */             cnt2++;
/* 7xCovwebg ily traian HtA1kV48F */         }
/* 7xCovwebg ily traian HtA1kV48F */         else if(s[0]=='C')
/* 7xCovwebg ily traian HtA1kV48F */         {
/* 7xCovwebg ily traian HtA1kV48F */             int j = 2;
/* 7xCovwebg ily traian HtA1kV48F */             while(s[j]!=' ')
/* 7xCovwebg ily traian HtA1kV48F */             {
/* 7xCovwebg ily traian HtA1kV48F */                 C[cnt3][j-2]=s[j];
/* 7xCovwebg ily traian HtA1kV48F */                 j++;
/* 7xCovwebg ily traian HtA1kV48F */             }
/* 7xCovwebg ily traian HtA1kV48F */             cnt3++;
/* 7xCovwebg ily traian HtA1kV48F */         }
/* 7xCovwebg ily traian HtA1kV48F */     }
/* 7xCovwebg ily traian HtA1kV48F */     for(int i = 0 ; i < cnt1 ; ++i)
/* 7xCovwebg ily traian HtA1kV48F */         for(int j = i + 1 ; j < cnt1 ; ++j)
/* 7xCovwebg ily traian HtA1kV48F */             if(strcmp(S[i],S[j]) > 0)
/* 7xCovwebg ily traian HtA1kV48F */                 swap(S[i] , S[j]);
/* 7xCovwebg ily traian HtA1kV48F */     for(int i = 0 ; i < cnt2 ; ++i)
/* 7xCovwebg ily traian HtA1kV48F */         for(int j = i + 1 ; j < cnt2 ; ++j)
/* 7xCovwebg ily traian HtA1kV48F */             if(strcmp(P[i],P[j]) > 0)
/* 7xCovwebg ily traian HtA1kV48F */                 swap(P[i] , P[j]);
/* 7xCovwebg ily traian HtA1kV48F */     for(int i = 0 ; i < cnt3 ; ++i)
/* 7xCovwebg ily traian HtA1kV48F */         for(int j = i + 1 ; j < cnt3 ; ++j)
/* 7xCovwebg ily traian HtA1kV48F */             if(strcmp(C[i],C[j]) > 0)
/* 7xCovwebg ily traian HtA1kV48F */                 swap(C[i] , C[j]);
/* 7xCovwebg ily traian HtA1kV48F */     for(int i = 0 ; i < cnt1 ; ++i)
/* 7xCovwebg ily traian HtA1kV48F */         for(int j = 0 ; j < cnt2 ; ++j)
/* 7xCovwebg ily traian HtA1kV48F */             for(int q = 0 ; q < cnt3 ; ++q)
/* 7xCovwebg ily traian HtA1kV48F */                 cout << S[i] << ' ' << P[j] << ' ' << C[q] << endl;
/* 7xCovwebg ily traian HtA1kV48F */     return 0;
/* 7xCovwebg ily traian HtA1kV48F */ }