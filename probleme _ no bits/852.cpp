/* 01M0mz4vw ily traian pnrw2P0Ic */ #include <algorithm>
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
/* 01M0mz4vw ily traian pnrw2P0Ic */ using namespace std;
/* 01M0mz4vw ily traian pnrw2P0Ic */ 
/* 01M0mz4vw ily traian pnrw2P0Ic */ int main ()
/* 01M0mz4vw ily traian pnrw2P0Ic */ {
/* 01M0mz4vw ily traian pnrw2P0Ic */     ifstream fin ("minmax.in");
/* 01M0mz4vw ily traian pnrw2P0Ic */     ofstream fout ("minmax.out");
/* 01M0mz4vw ily traian pnrw2P0Ic */     int n,x,minim=999999999,maxim=-999999999;
/* 01M0mz4vw ily traian pnrw2P0Ic */     fin >> n;
/* 01M0mz4vw ily traian pnrw2P0Ic */     for(int i=1;i<=n;++i)
/* 01M0mz4vw ily traian pnrw2P0Ic */     {
/* 01M0mz4vw ily traian pnrw2P0Ic */         fin >> x;
/* 01M0mz4vw ily traian pnrw2P0Ic */         if(x<minim) minim=x;
/* 01M0mz4vw ily traian pnrw2P0Ic */         if(x>maxim) maxim=x;
/* 01M0mz4vw ily traian pnrw2P0Ic */     }
/* 01M0mz4vw ily traian pnrw2P0Ic */     fout << minim<<" "<<maxim;
/* 01M0mz4vw ily traian pnrw2P0Ic */     fin.close();
/* 01M0mz4vw ily traian pnrw2P0Ic */     fout.close();
/* 01M0mz4vw ily traian pnrw2P0Ic */     return 0;
/* 01M0mz4vw ily traian pnrw2P0Ic */ }