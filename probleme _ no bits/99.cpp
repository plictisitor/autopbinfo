/* fpvN0G9qM ily traian 4yFjN7AzU */ #include <algorithm>
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
/* fpvN0G9qM ily traian 4yFjN7AzU */ using namespace std;
/* fpvN0G9qM ily traian 4yFjN7AzU */ ifstream fin("nraparitii.in");
/* fpvN0G9qM ily traian 4yFjN7AzU */ ofstream fout("nraparitii.out");
/* fpvN0G9qM ily traian 4yFjN7AzU */ int main()
/* fpvN0G9qM ily traian 4yFjN7AzU */ {
/* fpvN0G9qM ily traian 4yFjN7AzU */     int n,a[101],x,cnt=1;
/* fpvN0G9qM ily traian 4yFjN7AzU */     fin>>n;
/* fpvN0G9qM ily traian 4yFjN7AzU */     for(int i=1;i<n;i++) fin>>a[i];
/* fpvN0G9qM ily traian 4yFjN7AzU */     fin>>x;
/* fpvN0G9qM ily traian 4yFjN7AzU */     for(int i=1;i<n;i++)
/* fpvN0G9qM ily traian 4yFjN7AzU */     {
/* fpvN0G9qM ily traian 4yFjN7AzU */         if(a[i]==x) cnt++;
/* fpvN0G9qM ily traian 4yFjN7AzU */     }
/* fpvN0G9qM ily traian 4yFjN7AzU */     fout<<cnt;
/* fpvN0G9qM ily traian 4yFjN7AzU */     return 0;
/* fpvN0G9qM ily traian 4yFjN7AzU */ }