/* qxs2hh7wZ ily traian HLO7PPlfH */ #include <algorithm>
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
/* qxs2hh7wZ ily traian HLO7PPlfH */ using namespace std;
/* qxs2hh7wZ ily traian HLO7PPlfH */ 
/* qxs2hh7wZ ily traian HLO7PPlfH */ ifstream cin("lungimerandmax.in");
/* qxs2hh7wZ ily traian HLO7PPlfH */ ofstream cout("lungimerandmax.out");
/* qxs2hh7wZ ily traian HLO7PPlfH */ 
/* qxs2hh7wZ ily traian HLO7PPlfH */ char s[10001] , m[10001][1001];
/* qxs2hh7wZ ily traian HLO7PPlfH */ int vec[10001];
/* qxs2hh7wZ ily traian HLO7PPlfH */ 
/* qxs2hh7wZ ily traian HLO7PPlfH */ int main()
/* qxs2hh7wZ ily traian HLO7PPlfH */ {
/* qxs2hh7wZ ily traian HLO7PPlfH */     int l;
/* qxs2hh7wZ ily traian HLO7PPlfH */     cin >> l;
/* qxs2hh7wZ ily traian HLO7PPlfH */     cin.getline(s , 10);
/* qxs2hh7wZ ily traian HLO7PPlfH */     cin.getline(s , 10001);
/* qxs2hh7wZ ily traian HLO7PPlfH */     int cnt=0;
/* qxs2hh7wZ ily traian HLO7PPlfH */     int i = 0 , j = 0;
/* qxs2hh7wZ ily traian HLO7PPlfH */     while(s[i]!='\0')
/* qxs2hh7wZ ily traian HLO7PPlfH */     {
/* qxs2hh7wZ ily traian HLO7PPlfH */         if(s[i]==' ')
/* qxs2hh7wZ ily traian HLO7PPlfH */         {
/* qxs2hh7wZ ily traian HLO7PPlfH */ 
/* qxs2hh7wZ ily traian HLO7PPlfH */         }
/* qxs2hh7wZ ily traian HLO7PPlfH */         else
/* qxs2hh7wZ ily traian HLO7PPlfH */         {
/* qxs2hh7wZ ily traian HLO7PPlfH */             m[cnt][j]=s[i] , j++;
/* qxs2hh7wZ ily traian HLO7PPlfH */             if(s[i+1]==' ')
/* qxs2hh7wZ ily traian HLO7PPlfH */                 vec[cnt]=j , cnt++ , j = 0;
/* qxs2hh7wZ ily traian HLO7PPlfH */         }
/* qxs2hh7wZ ily traian HLO7PPlfH */         i++;
/* qxs2hh7wZ ily traian HLO7PPlfH */     }
/* qxs2hh7wZ ily traian HLO7PPlfH */     vec[cnt]=j;
/* qxs2hh7wZ ily traian HLO7PPlfH */     int ln=0;
/* qxs2hh7wZ ily traian HLO7PPlfH */     for(int i = 0 ; i <= cnt ; ++i)
/* qxs2hh7wZ ily traian HLO7PPlfH */     {
/* qxs2hh7wZ ily traian HLO7PPlfH */         if(ln + vec[i] <= l)
/* qxs2hh7wZ ily traian HLO7PPlfH */             cout << m[i] << ' ' , ln+=vec[i]+1;
/* qxs2hh7wZ ily traian HLO7PPlfH */         else
/* qxs2hh7wZ ily traian HLO7PPlfH */             cout << endl << m[i] << ' ', ln = vec[i]+1;
/* qxs2hh7wZ ily traian HLO7PPlfH */     }
/* qxs2hh7wZ ily traian HLO7PPlfH */     return 0;
/* qxs2hh7wZ ily traian HLO7PPlfH */ }