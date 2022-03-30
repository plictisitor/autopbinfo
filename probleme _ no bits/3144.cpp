/* bYLA3RrTt ily traian 33qJth3U0 */ #include <algorithm>
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
/* bYLA3RrTt ily traian 33qJth3U0 */ using namespace std;
/* bYLA3RrTt ily traian 33qJth3U0 */ 
/* bYLA3RrTt ily traian 33qJth3U0 */ ifstream cin("cifre_romane.in");
/* bYLA3RrTt ily traian 33qJth3U0 */ ofstream cout("cifre_romane.out");
/* bYLA3RrTt ily traian 33qJth3U0 */ 
/* bYLA3RrTt ily traian 33qJth3U0 */ char cif_rom[1001] , rez[256];
/* bYLA3RrTt ily traian 33qJth3U0 */ int n , cnt = 1 , t;
/* bYLA3RrTt ily traian 33qJth3U0 */ 
/* bYLA3RrTt ily traian 33qJth3U0 */ int main()
/* bYLA3RrTt ily traian 33qJth3U0 */ {
/* bYLA3RrTt ily traian 33qJth3U0 */     cin >> n;
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[1] = 'I';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[5] = 'V';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[10] = 'X';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[50] = 'L';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[100] = 'C';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[500] = 'D';
/* bYLA3RrTt ily traian 33qJth3U0 */     cif_rom[1000] = 'M';
/* bYLA3RrTt ily traian 33qJth3U0 */     while(n != 0)
/* bYLA3RrTt ily traian 33qJth3U0 */     {
/* bYLA3RrTt ily traian 33qJth3U0 */         int cif = n % 10;
/* bYLA3RrTt ily traian 33qJth3U0 */         if(cif == 1)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cif * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 2)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 3)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 4)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[5 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 5)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[5 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 6)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[5 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 7)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[5 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 8)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[5 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         else if(cif == 9)
/* bYLA3RrTt ily traian 33qJth3U0 */         {
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[10 * cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */             rez[++t] = cif_rom[cnt];
/* bYLA3RrTt ily traian 33qJth3U0 */         }
/* bYLA3RrTt ily traian 33qJth3U0 */         n /= 10;
/* bYLA3RrTt ily traian 33qJth3U0 */         cnt *= 10;
/* bYLA3RrTt ily traian 33qJth3U0 */     }
/* bYLA3RrTt ily traian 33qJth3U0 */     for(int i = t ; i >= 1 ; i--) cout << rez[i];
/* bYLA3RrTt ily traian 33qJth3U0 */ }