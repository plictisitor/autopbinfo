/* 3dPsPvkdK ily traian pRUsgtssu */ #include <algorithm>
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
/* 3dPsPvkdK ily traian pRUsgtssu */ using namespace std;
/* 3dPsPvkdK ily traian pRUsgtssu */ int main()
/* 3dPsPvkdK ily traian pRUsgtssu */ {
/* 3dPsPvkdK ily traian pRUsgtssu */     int n,x,aux,care,u,maxim=0;
/* 3dPsPvkdK ily traian pRUsgtssu */     cin>>n;
/* 3dPsPvkdK ily traian pRUsgtssu */     for(int i=1;i<=n;i++)
/* 3dPsPvkdK ily traian pRUsgtssu */     {
/* 3dPsPvkdK ily traian pRUsgtssu */       cin>>x;
/* 3dPsPvkdK ily traian pRUsgtssu */       aux=x;
/* 3dPsPvkdK ily traian pRUsgtssu */       int ogl=0;
/* 3dPsPvkdK ily traian pRUsgtssu */       while(x!=0)
/* 3dPsPvkdK ily traian pRUsgtssu */       {
/* 3dPsPvkdK ily traian pRUsgtssu */           ogl=ogl*10+x%10;
/* 3dPsPvkdK ily traian pRUsgtssu */           x=x/10;
/* 3dPsPvkdK ily traian pRUsgtssu */       }
/* 3dPsPvkdK ily traian pRUsgtssu */       u=ogl%10;
/* 3dPsPvkdK ily traian pRUsgtssu */       if(u>maxim)
/* 3dPsPvkdK ily traian pRUsgtssu */       {
/* 3dPsPvkdK ily traian pRUsgtssu */           maxim=u;
/* 3dPsPvkdK ily traian pRUsgtssu */           care=aux;
/* 3dPsPvkdK ily traian pRUsgtssu */       }
/* 3dPsPvkdK ily traian pRUsgtssu */       else
/* 3dPsPvkdK ily traian pRUsgtssu */         if(u==maxim)
/* 3dPsPvkdK ily traian pRUsgtssu */       {
/* 3dPsPvkdK ily traian pRUsgtssu */           if(aux>care)
/* 3dPsPvkdK ily traian pRUsgtssu */           care=aux;
/* 3dPsPvkdK ily traian pRUsgtssu */           else care=care;
/* 3dPsPvkdK ily traian pRUsgtssu */       }
/* 3dPsPvkdK ily traian pRUsgtssu */     }
/* 3dPsPvkdK ily traian pRUsgtssu */     cout<<care;
/* 3dPsPvkdK ily traian pRUsgtssu */      return 0;
/* 3dPsPvkdK ily traian pRUsgtssu */ 
/* 3dPsPvkdK ily traian pRUsgtssu */ }