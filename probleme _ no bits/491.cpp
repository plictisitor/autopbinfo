/* QnoC5WjuH ily traian idSor3ICu */ #include <algorithm>
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
/* QnoC5WjuH ily traian idSor3ICu */ #include <math.h>
/* QnoC5WjuH ily traian idSor3ICu */ using namespace std;
/* QnoC5WjuH ily traian idSor3ICu */  int main()
/* QnoC5WjuH ily traian idSor3ICu */  {
/* QnoC5WjuH ily traian idSor3ICu */     int n,a[1001],primul=-1,ultimul=-1,ip=-2,iu=-2,s=0,cnt=0;
/* QnoC5WjuH ily traian idSor3ICu */     cin>>n;
/* QnoC5WjuH ily traian idSor3ICu */     for(int i=0;i<n;i++) cin>>a[i];
/* QnoC5WjuH ily traian idSor3ICu */     for(int i=0;i<n;i++)
/* QnoC5WjuH ily traian idSor3ICu */     {
/* QnoC5WjuH ily traian idSor3ICu */         if(cnt==0 && a[i]%2==0) {primul=i;cnt++;}
/* QnoC5WjuH ily traian idSor3ICu */         if(a[i]%2==0) ultimul=i;
/* QnoC5WjuH ily traian idSor3ICu */     }
/* QnoC5WjuH ily traian idSor3ICu */     for(int i=primul;i<=ultimul;i++) s=s+a[i];
/* QnoC5WjuH ily traian idSor3ICu */     if(primul==-1) cout<<"NU EXISTA";
/* QnoC5WjuH ily traian idSor3ICu */     else cout<<s;
/* QnoC5WjuH ily traian idSor3ICu */     return 0;
/* QnoC5WjuH ily traian idSor3ICu */  }