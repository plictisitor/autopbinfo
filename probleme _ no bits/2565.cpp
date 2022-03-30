/* mEI0fSHhk ily traian SEmRkp4lY */ #include <algorithm>
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
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ using namespace std;
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ ifstream cin("catchy.in");
/* mEI0fSHhk ily traian SEmRkp4lY */ ofstream cout("catchy.out");
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ struct cuv
/* mEI0fSHhk ily traian SEmRkp4lY */ {
/* mEI0fSHhk ily traian SEmRkp4lY */     string c;
/* mEI0fSHhk ily traian SEmRkp4lY */     int ap;
/* mEI0fSHhk ily traian SEmRkp4lY */ }a[3501];
/* mEI0fSHhk ily traian SEmRkp4lY */ cuv b[3501];
/* mEI0fSHhk ily traian SEmRkp4lY */ int n , k , na , nb , ales , rad , ns , nt;
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ string S[100001] , T[100001];
/* mEI0fSHhk ily traian SEmRkp4lY */ int apare(cuv a[] , int n , string s)
/* mEI0fSHhk ily traian SEmRkp4lY */ {
/* mEI0fSHhk ily traian SEmRkp4lY */     for(int i = 1  ;i <= n ; i++)
/* mEI0fSHhk ily traian SEmRkp4lY */         if(s == a[i].c) return i;
/* mEI0fSHhk ily traian SEmRkp4lY */     return 0;
/* mEI0fSHhk ily traian SEmRkp4lY */ }
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ int cautarebinara(cuv a[] , int n , string s)
/* mEI0fSHhk ily traian SEmRkp4lY */ {
/* mEI0fSHhk ily traian SEmRkp4lY */     int st = 1 , dr = n;
/* mEI0fSHhk ily traian SEmRkp4lY */     while(st <= dr)
/* mEI0fSHhk ily traian SEmRkp4lY */     {
/* mEI0fSHhk ily traian SEmRkp4lY */         int m = (st + dr) / 2;
/* mEI0fSHhk ily traian SEmRkp4lY */         if(a[m].c == s) return m;
/* mEI0fSHhk ily traian SEmRkp4lY */         else if(a[m].c > s) dr = m - 1;
/* mEI0fSHhk ily traian SEmRkp4lY */         else st = m + 1;
/* mEI0fSHhk ily traian SEmRkp4lY */     }
/* mEI0fSHhk ily traian SEmRkp4lY */     return 0;
/* mEI0fSHhk ily traian SEmRkp4lY */ }
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ int maimic(cuv a , cuv b)
/* mEI0fSHhk ily traian SEmRkp4lY */ {
/* mEI0fSHhk ily traian SEmRkp4lY */     return a.c < b.c;
/* mEI0fSHhk ily traian SEmRkp4lY */ }
/* mEI0fSHhk ily traian SEmRkp4lY */ int main()
/* mEI0fSHhk ily traian SEmRkp4lY */ {
/* mEI0fSHhk ily traian SEmRkp4lY */     cin >> k;
/* mEI0fSHhk ily traian SEmRkp4lY */     cin.get();
/* mEI0fSHhk ily traian SEmRkp4lY */     char s[1501] , sep[] = " ,:;)(.?!><}{";
/* mEI0fSHhk ily traian SEmRkp4lY */     string cuv;
/* mEI0fSHhk ily traian SEmRkp4lY */     for(int i = 1 ; i <= k ; i++)
/* mEI0fSHhk ily traian SEmRkp4lY */     {
/* mEI0fSHhk ily traian SEmRkp4lY */         cin.getline(s , 1501);
/* mEI0fSHhk ily traian SEmRkp4lY */         char *p = strtok(s , sep);
/* mEI0fSHhk ily traian SEmRkp4lY */         while(p)
/* mEI0fSHhk ily traian SEmRkp4lY */         {
/* mEI0fSHhk ily traian SEmRkp4lY */             S[++ns] = p;
/* mEI0fSHhk ily traian SEmRkp4lY */             p = strtok(NULL , sep);
/* mEI0fSHhk ily traian SEmRkp4lY */         }
/* mEI0fSHhk ily traian SEmRkp4lY */     }
/* mEI0fSHhk ily traian SEmRkp4lY */     sort(S + 1 , S + ns+1);
/* mEI0fSHhk ily traian SEmRkp4lY */     na = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */     a[na].c = S[1];
/* mEI0fSHhk ily traian SEmRkp4lY */     a[na].ap = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */     for(int i = 2 ; i <= ns ; i++)
/* mEI0fSHhk ily traian SEmRkp4lY */         if(S[i] == S[i-1]) a[na].ap++;
/* mEI0fSHhk ily traian SEmRkp4lY */         else
/* mEI0fSHhk ily traian SEmRkp4lY */         {
/* mEI0fSHhk ily traian SEmRkp4lY */             na ++;
/* mEI0fSHhk ily traian SEmRkp4lY */             a[na].ap = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */             a[na].c = S[i];
/* mEI0fSHhk ily traian SEmRkp4lY */         }
/* mEI0fSHhk ily traian SEmRkp4lY */     cin >> n;
/* mEI0fSHhk ily traian SEmRkp4lY */     cin.get();
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */     for(int i = 1 ; i <= n ; i++)
/* mEI0fSHhk ily traian SEmRkp4lY */     {
/* mEI0fSHhk ily traian SEmRkp4lY */         nt = 0;
/* mEI0fSHhk ily traian SEmRkp4lY */         cin.getline(s , 1501);
/* mEI0fSHhk ily traian SEmRkp4lY */         char *p = strtok(s , sep);
/* mEI0fSHhk ily traian SEmRkp4lY */         while(p)
/* mEI0fSHhk ily traian SEmRkp4lY */         {
/* mEI0fSHhk ily traian SEmRkp4lY */             T[++nt] = p;
/* mEI0fSHhk ily traian SEmRkp4lY */             p = strtok(NULL , sep);
/* mEI0fSHhk ily traian SEmRkp4lY */         }
/* mEI0fSHhk ily traian SEmRkp4lY */         sort(T + 1 , T + nt + 1);
/* mEI0fSHhk ily traian SEmRkp4lY */         nb = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */         b[nb].c = T[1];
/* mEI0fSHhk ily traian SEmRkp4lY */         b[nb].ap = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */         for(int i = 2 ; i <= nt ; i++)
/* mEI0fSHhk ily traian SEmRkp4lY */             if(T[i] == T[i-1]) b[nb].ap++;
/* mEI0fSHhk ily traian SEmRkp4lY */             else
/* mEI0fSHhk ily traian SEmRkp4lY */             {
/* mEI0fSHhk ily traian SEmRkp4lY */                 nb ++;
/* mEI0fSHhk ily traian SEmRkp4lY */                 b[nb].ap = 1;
/* mEI0fSHhk ily traian SEmRkp4lY */                 b[nb].c = T[i];
/* mEI0fSHhk ily traian SEmRkp4lY */             }
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */         int rmin= 100000;
/* mEI0fSHhk ily traian SEmRkp4lY */         for(int j = 1 ; j <= nb ; j++)
/* mEI0fSHhk ily traian SEmRkp4lY */         {
/* mEI0fSHhk ily traian SEmRkp4lY */             int poz = cautarebinara(a , na , b[j].c);
/* mEI0fSHhk ily traian SEmRkp4lY */             if(poz == 0) rmin = 0;
/* mEI0fSHhk ily traian SEmRkp4lY */             else if(a[poz].ap / b[j].ap < rmin)
/* mEI0fSHhk ily traian SEmRkp4lY */                 rmin = a[poz].ap / b[j].ap;
/* mEI0fSHhk ily traian SEmRkp4lY */         }
/* mEI0fSHhk ily traian SEmRkp4lY */         if(rmin > rad)
/* mEI0fSHhk ily traian SEmRkp4lY */         {
/* mEI0fSHhk ily traian SEmRkp4lY */             rad = rmin;
/* mEI0fSHhk ily traian SEmRkp4lY */             ales = i;
/* mEI0fSHhk ily traian SEmRkp4lY */         }
/* mEI0fSHhk ily traian SEmRkp4lY */     }
/* mEI0fSHhk ily traian SEmRkp4lY */     cout << ales << endl << rad;
/* mEI0fSHhk ily traian SEmRkp4lY */ 
/* mEI0fSHhk ily traian SEmRkp4lY */ }