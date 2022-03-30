/* yno6xjfp8 ily traian DQP708UPz */ #include <algorithm>
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
/* yno6xjfp8 ily traian DQP708UPz */ using namespace std;
/* yno6xjfp8 ily traian DQP708UPz */ int main()
/* yno6xjfp8 ily traian DQP708UPz */ {
/* yno6xjfp8 ily traian DQP708UPz */     unsigned long long n,i,nr1,nr2;
/* yno6xjfp8 ily traian DQP708UPz */     cin>>n;
/* yno6xjfp8 ily traian DQP708UPz */     for(i=0;i<n;i++)
/* yno6xjfp8 ily traian DQP708UPz */     {
/* yno6xjfp8 ily traian DQP708UPz */         cin>>nr1>>nr2;
/* yno6xjfp8 ily traian DQP708UPz */         if(nr2&&nr1>18446744073709551615ULL/nr2)
/* yno6xjfp8 ily traian DQP708UPz */             cout<<"Overflow!"<<'\n';
/* yno6xjfp8 ily traian DQP708UPz */         else
/* yno6xjfp8 ily traian DQP708UPz */             cout<<nr1*nr2<<'\n';
/* yno6xjfp8 ily traian DQP708UPz */     }
/* yno6xjfp8 ily traian DQP708UPz */     return 0;
/* yno6xjfp8 ily traian DQP708UPz */ }