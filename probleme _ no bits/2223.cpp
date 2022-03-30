/* Yv44rpq9D ily traian rbUKMoL7q */ #include <algorithm>
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
/* Yv44rpq9D ily traian rbUKMoL7q */ using namespace std;
/* Yv44rpq9D ily traian rbUKMoL7q */ int main()
/* Yv44rpq9D ily traian rbUKMoL7q */ {
/* Yv44rpq9D ily traian rbUKMoL7q */     int n,aux,s=0,p=0,k=0;
/* Yv44rpq9D ily traian rbUKMoL7q */     cin>>n;
/* Yv44rpq9D ily traian rbUKMoL7q */     while(n!=0)
/* Yv44rpq9D ily traian rbUKMoL7q */     {
/* Yv44rpq9D ily traian rbUKMoL7q */         s=s+n%10;
/* Yv44rpq9D ily traian rbUKMoL7q */         n/=10;
/* Yv44rpq9D ily traian rbUKMoL7q */     }
/* Yv44rpq9D ily traian rbUKMoL7q */     aux=s;
/* Yv44rpq9D ily traian rbUKMoL7q */     while(s>9)
/* Yv44rpq9D ily traian rbUKMoL7q */     {
/* Yv44rpq9D ily traian rbUKMoL7q */         cout<<"9";
/* Yv44rpq9D ily traian rbUKMoL7q */         k++;
/* Yv44rpq9D ily traian rbUKMoL7q */         s=s-9;
/* Yv44rpq9D ily traian rbUKMoL7q */     }
/* Yv44rpq9D ily traian rbUKMoL7q */     cout<<s;
/* Yv44rpq9D ily traian rbUKMoL7q */     while(p<aux-k-1)
/* Yv44rpq9D ily traian rbUKMoL7q */     {
/* Yv44rpq9D ily traian rbUKMoL7q */         cout<<"0";
/* Yv44rpq9D ily traian rbUKMoL7q */         p++;
/* Yv44rpq9D ily traian rbUKMoL7q */     }
/* Yv44rpq9D ily traian rbUKMoL7q */ 
/* Yv44rpq9D ily traian rbUKMoL7q */ 
/* Yv44rpq9D ily traian rbUKMoL7q */ }