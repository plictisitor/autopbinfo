/* MDGwMvD5a ily traian PyaRrEoEp */ #include <algorithm>
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
/* MDGwMvD5a ily traian PyaRrEoEp */ using namespace std;
/* MDGwMvD5a ily traian PyaRrEoEp */ 
/* MDGwMvD5a ily traian PyaRrEoEp */ int f[6];
/* MDGwMvD5a ily traian PyaRrEoEp */ char ch[256];
/* MDGwMvD5a ily traian PyaRrEoEp */ 
/* MDGwMvD5a ily traian PyaRrEoEp */ int main()
/* MDGwMvD5a ily traian PyaRrEoEp */ {
/* MDGwMvD5a ily traian PyaRrEoEp */     cin.getline(ch , 256);
/* MDGwMvD5a ily traian PyaRrEoEp */     int i = 0;
/* MDGwMvD5a ily traian PyaRrEoEp */     while(ch[i]!='\0')
/* MDGwMvD5a ily traian PyaRrEoEp */     {
/* MDGwMvD5a ily traian PyaRrEoEp */         if(ch[i]=='a' || ch[i]=='A')
/* MDGwMvD5a ily traian PyaRrEoEp */             f[1]++;
/* MDGwMvD5a ily traian PyaRrEoEp */         else if(ch[i]=='e' || ch[i]=='E')
/* MDGwMvD5a ily traian PyaRrEoEp */             f[2]++;
/* MDGwMvD5a ily traian PyaRrEoEp */         else if(ch[i]=='i' || ch[i]=='I')
/* MDGwMvD5a ily traian PyaRrEoEp */             f[3]++;
/* MDGwMvD5a ily traian PyaRrEoEp */         else if(ch[i]=='o' || ch[i]=='O')
/* MDGwMvD5a ily traian PyaRrEoEp */             f[4]++;
/* MDGwMvD5a ily traian PyaRrEoEp */         else if(ch[i]=='u' || ch[i]=='U')
/* MDGwMvD5a ily traian PyaRrEoEp */             f[5]++;
/* MDGwMvD5a ily traian PyaRrEoEp */         i++;
/* MDGwMvD5a ily traian PyaRrEoEp */     }
/* MDGwMvD5a ily traian PyaRrEoEp */     int max=0 , val=0;
/* MDGwMvD5a ily traian PyaRrEoEp */     for(int i = 1 ; i <= 5 ; ++i)
/* MDGwMvD5a ily traian PyaRrEoEp */     {
/* MDGwMvD5a ily traian PyaRrEoEp */         if(f[i]>max)
/* MDGwMvD5a ily traian PyaRrEoEp */             max=f[i] , val=i;
/* MDGwMvD5a ily traian PyaRrEoEp */     }
/* MDGwMvD5a ily traian PyaRrEoEp */     if(val==1)
/* MDGwMvD5a ily traian PyaRrEoEp */         cout << 'A';
/* MDGwMvD5a ily traian PyaRrEoEp */     if(val==2)
/* MDGwMvD5a ily traian PyaRrEoEp */         cout << 'E';
/* MDGwMvD5a ily traian PyaRrEoEp */     if(val==3)
/* MDGwMvD5a ily traian PyaRrEoEp */         cout << 'I';
/* MDGwMvD5a ily traian PyaRrEoEp */     if(val==4)
/* MDGwMvD5a ily traian PyaRrEoEp */         cout << 'O';
/* MDGwMvD5a ily traian PyaRrEoEp */     if(val==5)
/* MDGwMvD5a ily traian PyaRrEoEp */         cout << 'U';
/* MDGwMvD5a ily traian PyaRrEoEp */     return 0;
/* MDGwMvD5a ily traian PyaRrEoEp */ }