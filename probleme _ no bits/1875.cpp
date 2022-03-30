/* YOApx7kiN ily traian yjqiT68Be */ #include <algorithm>
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
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ using namespace std;
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ ifstream fin("platou1.in");
/* YOApx7kiN ily traian yjqiT68Be */ ofstream fout("platou1.out");
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ int main()
/* YOApx7kiN ily traian yjqiT68Be */ {
/* YOApx7kiN ily traian yjqiT68Be */ int xmin=10, k=0,lg=1,x,y;
/* YOApx7kiN ily traian yjqiT68Be */    fin>>x; 
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ while(fin>>y)
/* YOApx7kiN ily traian yjqiT68Be */      if(x==y)
/* YOApx7kiN ily traian yjqiT68Be */          lg++; 
/* YOApx7kiN ily traian yjqiT68Be */     else
/* YOApx7kiN ily traian yjqiT68Be */       { 
/* YOApx7kiN ily traian yjqiT68Be */          if(k<lg)
/* YOApx7kiN ily traian yjqiT68Be */       {
/* YOApx7kiN ily traian yjqiT68Be */           k=lg; 
/* YOApx7kiN ily traian yjqiT68Be */            xmin=x; 
/* YOApx7kiN ily traian yjqiT68Be */       }
/* YOApx7kiN ily traian yjqiT68Be */ else
/* YOApx7kiN ily traian yjqiT68Be */       if(k==lg && xmin>x)
/* YOApx7kiN ily traian yjqiT68Be */           xmin=x;
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */            lg=1; 
/* YOApx7kiN ily traian yjqiT68Be */             x=y; 
/* YOApx7kiN ily traian yjqiT68Be */            }
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ fout<<k<<" "<<xmin<<endl;
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ fin.close();
/* YOApx7kiN ily traian yjqiT68Be */ fout.close();
/* YOApx7kiN ily traian yjqiT68Be */ 
/* YOApx7kiN ily traian yjqiT68Be */ return 0;
/* YOApx7kiN ily traian yjqiT68Be */ } 