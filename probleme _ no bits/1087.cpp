/* h8qPgG9YX ily traian OK1Qzsi0g */ #include <algorithm>
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
/* h8qPgG9YX ily traian OK1Qzsi0g */ 
/* h8qPgG9YX ily traian OK1Qzsi0g */ using namespace std;
/* h8qPgG9YX ily traian OK1Qzsi0g */ 
/* h8qPgG9YX ily traian OK1Qzsi0g */ ifstream cin("cuvinte4.in");
/* h8qPgG9YX ily traian OK1Qzsi0g */ ofstream cout("cuvinte4.out");
/* h8qPgG9YX ily traian OK1Qzsi0g */ 
/* h8qPgG9YX ily traian OK1Qzsi0g */ char mat[26][11];
/* h8qPgG9YX ily traian OK1Qzsi0g */ 
/* h8qPgG9YX ily traian OK1Qzsi0g */ bool perm(char a[] , char b[])
/* h8qPgG9YX ily traian OK1Qzsi0g */ {
/* h8qPgG9YX ily traian OK1Qzsi0g */     char x[11];
/* h8qPgG9YX ily traian OK1Qzsi0g */     strcpy(x , a);
/* h8qPgG9YX ily traian OK1Qzsi0g */     int n = strlen(x);
/* h8qPgG9YX ily traian OK1Qzsi0g */     for(int i = 0 ; i < n - 1 ; ++i)
/* h8qPgG9YX ily traian OK1Qzsi0g */     {
/* h8qPgG9YX ily traian OK1Qzsi0g */         char aux = x[0];
/* h8qPgG9YX ily traian OK1Qzsi0g */         for(int j = 0 ; j < strlen(x) - 1 ; ++j)
/* h8qPgG9YX ily traian OK1Qzsi0g */             x[j]=x[j+1];
/* h8qPgG9YX ily traian OK1Qzsi0g */         x[strlen(x) - 1]=aux;
/* h8qPgG9YX ily traian OK1Qzsi0g */         if(strcmp(x , b) == 0)
/* h8qPgG9YX ily traian OK1Qzsi0g */             return 1;
/* h8qPgG9YX ily traian OK1Qzsi0g */     }
/* h8qPgG9YX ily traian OK1Qzsi0g */     return 0;
/* h8qPgG9YX ily traian OK1Qzsi0g */ }
/* h8qPgG9YX ily traian OK1Qzsi0g */ 
/* h8qPgG9YX ily traian OK1Qzsi0g */ int main()
/* h8qPgG9YX ily traian OK1Qzsi0g */ {
/* h8qPgG9YX ily traian OK1Qzsi0g */     int n = 0;
/* h8qPgG9YX ily traian OK1Qzsi0g */     int vec[26];
/* h8qPgG9YX ily traian OK1Qzsi0g */     while(cin >> mat[n])
/* h8qPgG9YX ily traian OK1Qzsi0g */         vec[n] = n + 1 , n++;
/* h8qPgG9YX ily traian OK1Qzsi0g */     int d = strlen(mat[n-1]);
/* h8qPgG9YX ily traian OK1Qzsi0g */     mat[n-1][d-1]='\0';
/* h8qPgG9YX ily traian OK1Qzsi0g */     int poz = 0;
/* h8qPgG9YX ily traian OK1Qzsi0g */     for(int i = 0 ; i < n - 1 ; ++i)
/* h8qPgG9YX ily traian OK1Qzsi0g */     {
/* h8qPgG9YX ily traian OK1Qzsi0g */         if(perm(mat[i] , mat[i+1]))
/* h8qPgG9YX ily traian OK1Qzsi0g */         {
/* h8qPgG9YX ily traian OK1Qzsi0g */             if(poz==0) poz = i+1;
/* h8qPgG9YX ily traian OK1Qzsi0g */             for(int j = i + 1 ; j < n - 1 ; ++j)
/* h8qPgG9YX ily traian OK1Qzsi0g */             {
/* h8qPgG9YX ily traian OK1Qzsi0g */                 strcpy(mat[j] , mat[j+1]);
/* h8qPgG9YX ily traian OK1Qzsi0g */                 vec[j]=vec[j+1];
/* h8qPgG9YX ily traian OK1Qzsi0g */             }
/* h8qPgG9YX ily traian OK1Qzsi0g */             i--;
/* h8qPgG9YX ily traian OK1Qzsi0g */             n--;
/* h8qPgG9YX ily traian OK1Qzsi0g */         }
/* h8qPgG9YX ily traian OK1Qzsi0g */     }
/* h8qPgG9YX ily traian OK1Qzsi0g */     if(poz)
/* h8qPgG9YX ily traian OK1Qzsi0g */     cout << poz + 1 << endl;
/* h8qPgG9YX ily traian OK1Qzsi0g */     else
/* h8qPgG9YX ily traian OK1Qzsi0g */         cout << 0 << endl;
/* h8qPgG9YX ily traian OK1Qzsi0g */     for(int i = 0 ; i < n ; ++i)
/* h8qPgG9YX ily traian OK1Qzsi0g */         cout << vec[i] << ' ';
/* h8qPgG9YX ily traian OK1Qzsi0g */     return 0;
/* h8qPgG9YX ily traian OK1Qzsi0g */ }