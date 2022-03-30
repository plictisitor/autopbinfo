/* zp9w10dut ily traian J4aBTB3d0 */ #include <algorithm>
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
/* zp9w10dut ily traian J4aBTB3d0 */ using namespace std;
/* zp9w10dut ily traian J4aBTB3d0 */ 
/* zp9w10dut ily traian J4aBTB3d0 */ int apcar(char * s , char ch)
/* zp9w10dut ily traian J4aBTB3d0 */ {
/* zp9w10dut ily traian J4aBTB3d0 */     int i = 0;
/* zp9w10dut ily traian J4aBTB3d0 */     int cnt=0;
/* zp9w10dut ily traian J4aBTB3d0 */     while(s[i]!='\0')
/* zp9w10dut ily traian J4aBTB3d0 */     {
/* zp9w10dut ily traian J4aBTB3d0 */         if(s[i]==ch)
/* zp9w10dut ily traian J4aBTB3d0 */             cnt++;
/* zp9w10dut ily traian J4aBTB3d0 */         i++;
/* zp9w10dut ily traian J4aBTB3d0 */     }
/* zp9w10dut ily traian J4aBTB3d0 */     return cnt;
/* zp9w10dut ily traian J4aBTB3d0 */ }
/* zp9w10dut ily traian J4aBTB3d0 */ 
/* zp9w10dut ily traian J4aBTB3d0 */ int main()
/* zp9w10dut ily traian J4aBTB3d0 */ {
/* zp9w10dut ily traian J4aBTB3d0 */     char s[300];
/* zp9w10dut ily traian J4aBTB3d0 */     cin.getline(s , 300);
/* zp9w10dut ily traian J4aBTB3d0 */     int cnt=0;
/* zp9w10dut ily traian J4aBTB3d0 */     char character = 'a';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='e';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='i';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='o';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='u';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */     character='A';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='E';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='I';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='O';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */      character='U';
/* zp9w10dut ily traian J4aBTB3d0 */     cnt+=apcar(s , character);
/* zp9w10dut ily traian J4aBTB3d0 */     cout << cnt;
/* zp9w10dut ily traian J4aBTB3d0 */     return 0;    
/* zp9w10dut ily traian J4aBTB3d0 */ }