/* JiSgSNPP0 ily traian 9h502r4j5 */ #include <algorithm>
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
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ using namespace std;
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ ifstream cin("changecase.in");
/* JiSgSNPP0 ily traian 9h502r4j5 */ ofstream cout("changecase.out");
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ void LC(char s[])
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     int i = 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */     while(s[i])
/* JiSgSNPP0 ily traian 9h502r4j5 */     {
/* JiSgSNPP0 ily traian 9h502r4j5 */         if(isalpha(s[i]))
/* JiSgSNPP0 ily traian 9h502r4j5 */             s[i]=tolower(s[i]);
/* JiSgSNPP0 ily traian 9h502r4j5 */         i++;
/* JiSgSNPP0 ily traian 9h502r4j5 */     }
/* JiSgSNPP0 ily traian 9h502r4j5 */ }
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ void UC(char s[])
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     int i = 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */     while(s[i])
/* JiSgSNPP0 ily traian 9h502r4j5 */     {
/* JiSgSNPP0 ily traian 9h502r4j5 */         if(isalpha(s[i]))
/* JiSgSNPP0 ily traian 9h502r4j5 */             s[i] = toupper(s[i]);
/* JiSgSNPP0 ily traian 9h502r4j5 */         i++;
/* JiSgSNPP0 ily traian 9h502r4j5 */     }
/* JiSgSNPP0 ily traian 9h502r4j5 */ }
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ void TC(char s[])
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     LC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     int i = 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */     while(s[i])
/* JiSgSNPP0 ily traian 9h502r4j5 */     {
/* JiSgSNPP0 ily traian 9h502r4j5 */         if((i == 0 && isalpha(s[i])) ||
/* JiSgSNPP0 ily traian 9h502r4j5 */            (strchr(".,; " , s[i-1]) && !strchr(".,; " , s[i])))
/* JiSgSNPP0 ily traian 9h502r4j5 */             s[i] = toupper(s[i]);
/* JiSgSNPP0 ily traian 9h502r4j5 */         i++;
/* JiSgSNPP0 ily traian 9h502r4j5 */     }
/* JiSgSNPP0 ily traian 9h502r4j5 */ }
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ void IC(char s[])
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     UC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     int i = 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */     while(s[i])
/* JiSgSNPP0 ily traian 9h502r4j5 */     {
/* JiSgSNPP0 ily traian 9h502r4j5 */         if((i == 0 && isalpha(s[i])) ||
/* JiSgSNPP0 ily traian 9h502r4j5 */            (strchr(".,; " , s[i-1]) && !strchr(".,; " , s[i])))
/* JiSgSNPP0 ily traian 9h502r4j5 */             s[i] = tolower(s[i]);
/* JiSgSNPP0 ily traian 9h502r4j5 */         i++;
/* JiSgSNPP0 ily traian 9h502r4j5 */     }
/* JiSgSNPP0 ily traian 9h502r4j5 */ }
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ void SC(char s[])
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     LC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     bool ok = true;
/* JiSgSNPP0 ily traian 9h502r4j5 */     int i = 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */     while(s[i])
/* JiSgSNPP0 ily traian 9h502r4j5 */     {
/* JiSgSNPP0 ily traian 9h502r4j5 */         if(isalpha(s[i]) && ok)
/* JiSgSNPP0 ily traian 9h502r4j5 */             s[i] = toupper(s[i]) , ok = false;
/* JiSgSNPP0 ily traian 9h502r4j5 */         if(s[i] == '.')
/* JiSgSNPP0 ily traian 9h502r4j5 */             ok = true;
/* JiSgSNPP0 ily traian 9h502r4j5 */         i++;
/* JiSgSNPP0 ily traian 9h502r4j5 */     }
/* JiSgSNPP0 ily traian 9h502r4j5 */ }
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ char c[15];
/* JiSgSNPP0 ily traian 9h502r4j5 */ char s[256];
/* JiSgSNPP0 ily traian 9h502r4j5 */ 
/* JiSgSNPP0 ily traian 9h502r4j5 */ int main()
/* JiSgSNPP0 ily traian 9h502r4j5 */ {
/* JiSgSNPP0 ily traian 9h502r4j5 */     cin >> c;
/* JiSgSNPP0 ily traian 9h502r4j5 */     cin.get();
/* JiSgSNPP0 ily traian 9h502r4j5 */     cin.getline(s , 255);
/* JiSgSNPP0 ily traian 9h502r4j5 */     if(strcmp("lowercase" , c) == 0)
/* JiSgSNPP0 ily traian 9h502r4j5 */         LC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     if(strcmp("UPPERCASE" , c) == 0)
/* JiSgSNPP0 ily traian 9h502r4j5 */         UC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     if(strcmp("TitleCase" , c) == 0)
/* JiSgSNPP0 ily traian 9h502r4j5 */         TC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     if(strcmp("iNVERTcASE" , c) == 0)
/* JiSgSNPP0 ily traian 9h502r4j5 */         IC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     if(strcmp("Sentencecase" , c) == 0)
/* JiSgSNPP0 ily traian 9h502r4j5 */         SC(s);
/* JiSgSNPP0 ily traian 9h502r4j5 */     cout << s;
/* JiSgSNPP0 ily traian 9h502r4j5 */     return 0;
/* JiSgSNPP0 ily traian 9h502r4j5 */ }