/* 7ir7bf1ET ily traian e2XWbbZzl */ #include <algorithm>
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
/* 7ir7bf1ET ily traian e2XWbbZzl */ 
/* 7ir7bf1ET ily traian e2XWbbZzl */ using namespace std;
/* 7ir7bf1ET ily traian e2XWbbZzl */ 
/* 7ir7bf1ET ily traian e2XWbbZzl */ ifstream cin("valori.in");
/* 7ir7bf1ET ily traian e2XWbbZzl */ ofstream cout("valori.out");
/* 7ir7bf1ET ily traian e2XWbbZzl */ 
/* 7ir7bf1ET ily traian e2XWbbZzl */ int vec[30];
/* 7ir7bf1ET ily traian e2XWbbZzl */ char m[1001][1001];
/* 7ir7bf1ET ily traian e2XWbbZzl */ 
/* 7ir7bf1ET ily traian e2XWbbZzl */ int main()
/* 7ir7bf1ET ily traian e2XWbbZzl */ {
/* 7ir7bf1ET ily traian e2XWbbZzl */     for(int i = 0 ; i < 26 ; ++i)
/* 7ir7bf1ET ily traian e2XWbbZzl */         cin >> vec[i];
/* 7ir7bf1ET ily traian e2XWbbZzl */     int n;
/* 7ir7bf1ET ily traian e2XWbbZzl */     cin >> n;
/* 7ir7bf1ET ily traian e2XWbbZzl */     int max = -1000000;
/* 7ir7bf1ET ily traian e2XWbbZzl */     for(int f = 1 ; f <= n ; ++f)
/* 7ir7bf1ET ily traian e2XWbbZzl */     {
/* 7ir7bf1ET ily traian e2XWbbZzl */         char s[501];
/* 7ir7bf1ET ily traian e2XWbbZzl */         cin >> s;
/* 7ir7bf1ET ily traian e2XWbbZzl */         int i = 0;
/* 7ir7bf1ET ily traian e2XWbbZzl */         int s1=0 , s2=0;
/* 7ir7bf1ET ily traian e2XWbbZzl */         while(s[i]!='\0')
/* 7ir7bf1ET ily traian e2XWbbZzl */         {
/* 7ir7bf1ET ily traian e2XWbbZzl */             if(s[i]>='A' && s[i]<='Z')
/* 7ir7bf1ET ily traian e2XWbbZzl */                 s1+=vec[(int)s[i]-65];
/* 7ir7bf1ET ily traian e2XWbbZzl */             else
/* 7ir7bf1ET ily traian e2XWbbZzl */                 s2+=vec[(int)s[i]-97];
/* 7ir7bf1ET ily traian e2XWbbZzl */             i++;
/* 7ir7bf1ET ily traian e2XWbbZzl */         }
/* 7ir7bf1ET ily traian e2XWbbZzl */         if(s2-s1>max)
/* 7ir7bf1ET ily traian e2XWbbZzl */             max=s2-s1;
/* 7ir7bf1ET ily traian e2XWbbZzl */         strcpy(m[f] , s);
/* 7ir7bf1ET ily traian e2XWbbZzl */     }
/* 7ir7bf1ET ily traian e2XWbbZzl */     for(int f = 1 ; f <= n ; ++f)
/* 7ir7bf1ET ily traian e2XWbbZzl */     {
/* 7ir7bf1ET ily traian e2XWbbZzl */         char s[501];
/* 7ir7bf1ET ily traian e2XWbbZzl */         strcpy(s , m[f]);
/* 7ir7bf1ET ily traian e2XWbbZzl */         int i = 0;
/* 7ir7bf1ET ily traian e2XWbbZzl */         int s1=0 , s2=0;
/* 7ir7bf1ET ily traian e2XWbbZzl */         while(s[i]!='\0')
/* 7ir7bf1ET ily traian e2XWbbZzl */         {
/* 7ir7bf1ET ily traian e2XWbbZzl */             if(s[i]>='A' && s[i]<='Z')
/* 7ir7bf1ET ily traian e2XWbbZzl */                 s1+=vec[(int)s[i]-65];
/* 7ir7bf1ET ily traian e2XWbbZzl */             else
/* 7ir7bf1ET ily traian e2XWbbZzl */                 s2+=vec[(int)s[i]-97];
/* 7ir7bf1ET ily traian e2XWbbZzl */             i++;
/* 7ir7bf1ET ily traian e2XWbbZzl */         }
/* 7ir7bf1ET ily traian e2XWbbZzl */         if(s2-s1==max)
/* 7ir7bf1ET ily traian e2XWbbZzl */             cout << s << endl;
/* 7ir7bf1ET ily traian e2XWbbZzl */     }
/* 7ir7bf1ET ily traian e2XWbbZzl */     return 0;
/* 7ir7bf1ET ily traian e2XWbbZzl */ }