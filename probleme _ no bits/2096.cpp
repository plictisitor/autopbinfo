/* cvnFnpI4M ily traian Q6ZpRa5mh */ #include <algorithm>
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
/* cvnFnpI4M ily traian Q6ZpRa5mh */ using namespace std;
/* cvnFnpI4M ily traian Q6ZpRa5mh */ ifstream fin("xyz.in");
/* cvnFnpI4M ily traian Q6ZpRa5mh */ ofstream fout("xyz.out");
/* cvnFnpI4M ily traian Q6ZpRa5mh */ int main()
/* cvnFnpI4M ily traian Q6ZpRa5mh */ {
/* cvnFnpI4M ily traian Q6ZpRa5mh */     int x,y,z;
/* cvnFnpI4M ily traian Q6ZpRa5mh */     fin>>x>>y>>z;
/* cvnFnpI4M ily traian Q6ZpRa5mh */     fout<<y;
/* cvnFnpI4M ily traian Q6ZpRa5mh */     for(int i=1;i<x;i++)
/* cvnFnpI4M ily traian Q6ZpRa5mh */         fout<<z;
/* cvnFnpI4M ily traian Q6ZpRa5mh */     return 0;
/* cvnFnpI4M ily traian Q6ZpRa5mh */ }