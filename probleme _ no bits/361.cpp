/* Z7dNqh491 ily traian SskS1SP1F */ #include <algorithm>
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
/* Z7dNqh491 ily traian SskS1SP1F */ using namespace std;
/* Z7dNqh491 ily traian SskS1SP1F */ int main ()
/* Z7dNqh491 ily traian SskS1SP1F */ {
/* Z7dNqh491 ily traian SskS1SP1F */     int n,aux,p=1,maxim=0;
/* Z7dNqh491 ily traian SskS1SP1F */     cin>>n;
/* Z7dNqh491 ily traian SskS1SP1F */ 
/* Z7dNqh491 ily traian SskS1SP1F */     while (p<=n)
/* Z7dNqh491 ily traian SskS1SP1F */     {
/* Z7dNqh491 ily traian SskS1SP1F */         aux=n/(p*10)*p + n%p;
/* Z7dNqh491 ily traian SskS1SP1F */        // cout << aux << " ";
/* Z7dNqh491 ily traian SskS1SP1F */         if (aux>maxim)
/* Z7dNqh491 ily traian SskS1SP1F */             maxim=aux;
/* Z7dNqh491 ily traian SskS1SP1F */         p=p*10;
/* Z7dNqh491 ily traian SskS1SP1F */     }
/* Z7dNqh491 ily traian SskS1SP1F */     cout << maxim;
/* Z7dNqh491 ily traian SskS1SP1F */     return 0;
/* Z7dNqh491 ily traian SskS1SP1F */ }