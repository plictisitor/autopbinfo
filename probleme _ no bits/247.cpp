/* D5mIxRc9Q ily traian pYwgmyJXQ */ #include <algorithm>
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
/* D5mIxRc9Q ily traian pYwgmyJXQ */ 
/* D5mIxRc9Q ily traian pYwgmyJXQ */ using namespace std;
/* D5mIxRc9Q ily traian pYwgmyJXQ */ 
/* D5mIxRc9Q ily traian pYwgmyJXQ */ ifstream fin("cifreord1.in");
/* D5mIxRc9Q ily traian pYwgmyJXQ */ ofstream fout("cifreord1.out");
/* D5mIxRc9Q ily traian pYwgmyJXQ */ 
/* D5mIxRc9Q ily traian pYwgmyJXQ */ int main()
/* D5mIxRc9Q ily traian pYwgmyJXQ */ {
/* D5mIxRc9Q ily traian pYwgmyJXQ */     int a[100000];
/* D5mIxRc9Q ily traian pYwgmyJXQ */     int v[10000];
/* D5mIxRc9Q ily traian pYwgmyJXQ */     int n=0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */     int p = 0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */     int cnt=0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */     while(fin >> v[n])
/* D5mIxRc9Q ily traian pYwgmyJXQ */     n++;
/* D5mIxRc9Q ily traian pYwgmyJXQ */     for(int i = 0 ; i < n ; ++i)
/* D5mIxRc9Q ily traian pYwgmyJXQ */     {
/* D5mIxRc9Q ily traian pYwgmyJXQ */         if(v[i]==0)
/* D5mIxRc9Q ily traian pYwgmyJXQ */         {
/* D5mIxRc9Q ily traian pYwgmyJXQ */             a[p]=0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */             p++;
/* D5mIxRc9Q ily traian pYwgmyJXQ */         }
/* D5mIxRc9Q ily traian pYwgmyJXQ */         while(v[i])
/* D5mIxRc9Q ily traian pYwgmyJXQ */         {
/* D5mIxRc9Q ily traian pYwgmyJXQ */             a[p]=v[i]%10;
/* D5mIxRc9Q ily traian pYwgmyJXQ */             p++;
/* D5mIxRc9Q ily traian pYwgmyJXQ */             v[i]/=10;
/* D5mIxRc9Q ily traian pYwgmyJXQ */         }
/* D5mIxRc9Q ily traian pYwgmyJXQ */     }
/* D5mIxRc9Q ily traian pYwgmyJXQ */     sort(a , a+p);
/* D5mIxRc9Q ily traian pYwgmyJXQ */     for(int i = p-1 ; i >= 0 ; --i)
/* D5mIxRc9Q ily traian pYwgmyJXQ */     {
/* D5mIxRc9Q ily traian pYwgmyJXQ */         fout << a[i] << ' ';
/* D5mIxRc9Q ily traian pYwgmyJXQ */         cnt++;
/* D5mIxRc9Q ily traian pYwgmyJXQ */         if(cnt==20)
/* D5mIxRc9Q ily traian pYwgmyJXQ */         {
/* D5mIxRc9Q ily traian pYwgmyJXQ */             fout << endl;
/* D5mIxRc9Q ily traian pYwgmyJXQ */             cnt=0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */         }
/* D5mIxRc9Q ily traian pYwgmyJXQ */     }
/* D5mIxRc9Q ily traian pYwgmyJXQ */     return 0;
/* D5mIxRc9Q ily traian pYwgmyJXQ */ }