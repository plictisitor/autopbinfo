/* tu0FpQRFY ily traian KnAuOIgBJ */ #include <algorithm>
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
/* tu0FpQRFY ily traian KnAuOIgBJ */ 
/* tu0FpQRFY ily traian KnAuOIgBJ */ using namespace std;
/* tu0FpQRFY ily traian KnAuOIgBJ */ 
/* tu0FpQRFY ily traian KnAuOIgBJ */ int main()
/* tu0FpQRFY ily traian KnAuOIgBJ */ {
/* tu0FpQRFY ily traian KnAuOIgBJ */ int n,i,S=0;
/* tu0FpQRFY ily traian KnAuOIgBJ */ cin>>n;
/* tu0FpQRFY ily traian KnAuOIgBJ */ while (n<0 || n>100)
/* tu0FpQRFY ily traian KnAuOIgBJ */ {
/* tu0FpQRFY ily traian KnAuOIgBJ */ cin>>n;
/* tu0FpQRFY ily traian KnAuOIgBJ */ }
/* tu0FpQRFY ily traian KnAuOIgBJ */ for (i=1;i<=n;i++)
/* tu0FpQRFY ily traian KnAuOIgBJ */ if (i%2!=0)
/* tu0FpQRFY ily traian KnAuOIgBJ */ S=S+i*(i+1);
/* tu0FpQRFY ily traian KnAuOIgBJ */ else
/* tu0FpQRFY ily traian KnAuOIgBJ */ S=S-i*(i+1);
/* tu0FpQRFY ily traian KnAuOIgBJ */ cout<<"Rezultatul este "<<S;
/* tu0FpQRFY ily traian KnAuOIgBJ */ return 0;
/* tu0FpQRFY ily traian KnAuOIgBJ */ }