/* TxILsAuhG ily traian 0QS0PmzOR */ #include <algorithm>
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
/* TxILsAuhG ily traian 0QS0PmzOR */ using namespace std;
/* TxILsAuhG ily traian 0QS0PmzOR */ 
/* TxILsAuhG ily traian 0QS0PmzOR */ int main()
/* TxILsAuhG ily traian 0QS0PmzOR */ {
/* TxILsAuhG ily traian 0QS0PmzOR */     int i , n , nr_varfuri=0;
/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>n; 
/* TxILsAuhG ily traian 0QS0PmzOR */     int v[n+1];
/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>v[1]>>v[2];
/* TxILsAuhG ily traian 0QS0PmzOR */     if(v[1]>v[2]||v[1]==v[2])
/* TxILsAuhG ily traian 0QS0PmzOR */     {
/* TxILsAuhG ily traian 0QS0PmzOR */         cout<<"NU";
/* TxILsAuhG ily traian 0QS0PmzOR */         return 0;
/* TxILsAuhG ily traian 0QS0PmzOR */     }
/* TxILsAuhG ily traian 0QS0PmzOR */     for(i=3;i<n;i++)
/* TxILsAuhG ily traian 0QS0PmzOR */     {
/* TxILsAuhG ily traian 0QS0PmzOR */         cin>>v[i];  
/* TxILsAuhG ily traian 0QS0PmzOR */         if(v[i]==v[i-1])
/* TxILsAuhG ily traian 0QS0PmzOR */         {
/* TxILsAuhG ily traian 0QS0PmzOR */             cout<<"NU";
/* TxILsAuhG ily traian 0QS0PmzOR */             return 0;
/* TxILsAuhG ily traian 0QS0PmzOR */         }
/* TxILsAuhG ily traian 0QS0PmzOR */         else if(nr_varfuri==0 && v[i-1]>v[i])
/* TxILsAuhG ily traian 0QS0PmzOR */         {
/* TxILsAuhG ily traian 0QS0PmzOR */             nr_varfuri++;   
/* TxILsAuhG ily traian 0QS0PmzOR */         }
/* TxILsAuhG ily traian 0QS0PmzOR */         else if(nr_varfuri==1 && v[i-1]<v[i])
/* TxILsAuhG ily traian 0QS0PmzOR */         {
/* TxILsAuhG ily traian 0QS0PmzOR */             cout<<"NU";
/* TxILsAuhG ily traian 0QS0PmzOR */             return 0;
/* TxILsAuhG ily traian 0QS0PmzOR */         }   
/* TxILsAuhG ily traian 0QS0PmzOR */     }
/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>v[n];
/* TxILsAuhG ily traian 0QS0PmzOR */     if(v[n-1]==v[n] || v[n-1]<v[n])
/* TxILsAuhG ily traian 0QS0PmzOR */     {
/* TxILsAuhG ily traian 0QS0PmzOR */         cout<<"NU";
/* TxILsAuhG ily traian 0QS0PmzOR */         return 0;
/* TxILsAuhG ily traian 0QS0PmzOR */     }
/* TxILsAuhG ily traian 0QS0PmzOR */     cout<<"DA"; 
/* TxILsAuhG ily traian 0QS0PmzOR */     return 0;
/* TxILsAuhG ily traian 0QS0PmzOR */ }