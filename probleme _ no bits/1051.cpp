/* h5D7wPA4j ily traian aD7csKV0T */ #include <algorithm>
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
/* h5D7wPA4j ily traian aD7csKV0T */ 
/* h5D7wPA4j ily traian aD7csKV0T */ using namespace std;
/* h5D7wPA4j ily traian aD7csKV0T */ 
/* h5D7wPA4j ily traian aD7csKV0T */ ifstream fin("bete1.in");
/* h5D7wPA4j ily traian aD7csKV0T */ ofstream fout("bete1.out");
/* h5D7wPA4j ily traian aD7csKV0T */ 
/* h5D7wPA4j ily traian aD7csKV0T */ int main()
/* h5D7wPA4j ily traian aD7csKV0T */ {
/* h5D7wPA4j ily traian aD7csKV0T */     int n;
/* h5D7wPA4j ily traian aD7csKV0T */     fin >> n;
/* h5D7wPA4j ily traian aD7csKV0T */     int a[10000];
/* h5D7wPA4j ily traian aD7csKV0T */     int b[10000];
/* h5D7wPA4j ily traian aD7csKV0T */     int cnt=0;
/* h5D7wPA4j ily traian aD7csKV0T */     int s=0;
/* h5D7wPA4j ily traian aD7csKV0T */     for(int i = 0 ; i < n ; ++i)
/* h5D7wPA4j ily traian aD7csKV0T */     {
/* h5D7wPA4j ily traian aD7csKV0T */     fin >> a[i];
/* h5D7wPA4j ily traian aD7csKV0T */     s+=a[i];
/* h5D7wPA4j ily traian aD7csKV0T */     }
/* h5D7wPA4j ily traian aD7csKV0T */     for(int i = 0 ; i < n ; ++i)
/* h5D7wPA4j ily traian aD7csKV0T */     {
/* h5D7wPA4j ily traian aD7csKV0T */     fin >> b[i];
/* h5D7wPA4j ily traian aD7csKV0T */     s+=b[i];
/* h5D7wPA4j ily traian aD7csKV0T */     }
/* h5D7wPA4j ily traian aD7csKV0T */     sort(a , a+n);
/* h5D7wPA4j ily traian aD7csKV0T */     sort(b , b+n);
/* h5D7wPA4j ily traian aD7csKV0T */     fout << s/n << endl;
/* h5D7wPA4j ily traian aD7csKV0T */     fout << a[n-1]+b[n-1] << endl;
/* h5D7wPA4j ily traian aD7csKV0T */     int max=a[n-1]+b[n-1];
/* h5D7wPA4j ily traian aD7csKV0T */     for(int i = n-1 ; i >= 0 ; --i)
/* h5D7wPA4j ily traian aD7csKV0T */     if(a[i]+b[i]==max)
/* h5D7wPA4j ily traian aD7csKV0T */     cnt++;
/* h5D7wPA4j ily traian aD7csKV0T */     fout << cnt;
/* h5D7wPA4j ily traian aD7csKV0T */     
/* h5D7wPA4j ily traian aD7csKV0T */     fin.close();
/* h5D7wPA4j ily traian aD7csKV0T */     fout.close();
/* h5D7wPA4j ily traian aD7csKV0T */     return 0;    
/* h5D7wPA4j ily traian aD7csKV0T */ }