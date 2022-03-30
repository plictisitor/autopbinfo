/* PVZ9RlKbv ily traian ELcvvYqor */ #include <algorithm>
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
/* PVZ9RlKbv ily traian ELcvvYqor */ using namespace std;
/* PVZ9RlKbv ily traian ELcvvYqor */ int main()
/* PVZ9RlKbv ily traian ELcvvYqor */ {
/* PVZ9RlKbv ily traian ELcvvYqor */     long long a,b,aux,x,k=0,cate,i,p=0,y;
/* PVZ9RlKbv ily traian ELcvvYqor */     cin>>a>>b;
/* PVZ9RlKbv ily traian ELcvvYqor */     for(int i=a;i<=b;i++)
/* PVZ9RlKbv ily traian ELcvvYqor */     {
/* PVZ9RlKbv ily traian ELcvvYqor */        x=i;
/* PVZ9RlKbv ily traian ELcvvYqor */        aux=i;
/* PVZ9RlKbv ily traian ELcvvYqor */        y=i;
/* PVZ9RlKbv ily traian ELcvvYqor */        cate=0;
/* PVZ9RlKbv ily traian ELcvvYqor */        p=0;
/* PVZ9RlKbv ily traian ELcvvYqor */        while(x!=0)
/* PVZ9RlKbv ily traian ELcvvYqor */        {
/* PVZ9RlKbv ily traian ELcvvYqor */            if(x%10!=0)
/* PVZ9RlKbv ily traian ELcvvYqor */            {
/* PVZ9RlKbv ily traian ELcvvYqor */                if(aux%(x%10)==0) cate++;
/* PVZ9RlKbv ily traian ELcvvYqor */            }
/* PVZ9RlKbv ily traian ELcvvYqor */            p++;
/* PVZ9RlKbv ily traian ELcvvYqor */            if(x%10==0) cate++;
/* PVZ9RlKbv ily traian ELcvvYqor */            x=x/10;
/* PVZ9RlKbv ily traian ELcvvYqor */        }
/* PVZ9RlKbv ily traian ELcvvYqor */        if(p==cate) k++;
/* PVZ9RlKbv ily traian ELcvvYqor */     }
/* PVZ9RlKbv ily traian ELcvvYqor */ cout<<k;
/* PVZ9RlKbv ily traian ELcvvYqor */     return 0;
/* PVZ9RlKbv ily traian ELcvvYqor */ }