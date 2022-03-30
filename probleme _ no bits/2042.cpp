/* gmAp4bktg ily traian YNhteeEhm */ #include <algorithm>
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
/* gmAp4bktg ily traian YNhteeEhm */ #include <stdio.h>
/* gmAp4bktg ily traian YNhteeEhm */ #include <ctype.h>
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ using namespace std;
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ class InParser {
/* gmAp4bktg ily traian YNhteeEhm */ private:
/* gmAp4bktg ily traian YNhteeEhm */     FILE *fin;
/* gmAp4bktg ily traian YNhteeEhm */     char *buff;
/* gmAp4bktg ily traian YNhteeEhm */     int sp;
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     char read_ch() {
/* gmAp4bktg ily traian YNhteeEhm */         ++sp;
/* gmAp4bktg ily traian YNhteeEhm */         if (sp == 4096) {
/* gmAp4bktg ily traian YNhteeEhm */             sp = 0;
/* gmAp4bktg ily traian YNhteeEhm */             fread(buff, 1, 4096, fin);
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         return buff[sp];
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ public:
/* gmAp4bktg ily traian YNhteeEhm */     InParser(const char* nume) {
/* gmAp4bktg ily traian YNhteeEhm */         fin = fopen(nume, "r");
/* gmAp4bktg ily traian YNhteeEhm */         buff = new char[4096]();
/* gmAp4bktg ily traian YNhteeEhm */         sp = 4095;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     InParser& operator >> (int &n) {
/* gmAp4bktg ily traian YNhteeEhm */         char c;
/* gmAp4bktg ily traian YNhteeEhm */         while (!isdigit(c = read_ch()) && c != '-');
/* gmAp4bktg ily traian YNhteeEhm */         int sgn = 1;
/* gmAp4bktg ily traian YNhteeEhm */         if (c == '-') {
/* gmAp4bktg ily traian YNhteeEhm */             n = 0;
/* gmAp4bktg ily traian YNhteeEhm */             sgn = -1;
/* gmAp4bktg ily traian YNhteeEhm */         } else {
/* gmAp4bktg ily traian YNhteeEhm */             n = c - '0';
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         while (isdigit(c = read_ch())) {
/* gmAp4bktg ily traian YNhteeEhm */             n = 10 * n + c - '0';
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         n *= sgn;
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     InParser& operator >> (long long &n) {
/* gmAp4bktg ily traian YNhteeEhm */         char c;
/* gmAp4bktg ily traian YNhteeEhm */         n = 0;
/* gmAp4bktg ily traian YNhteeEhm */         while (!isdigit(c = read_ch()) && c != '-');
/* gmAp4bktg ily traian YNhteeEhm */         long long sgn = 1;
/* gmAp4bktg ily traian YNhteeEhm */         if (c == '-') {
/* gmAp4bktg ily traian YNhteeEhm */             n = 0;
/* gmAp4bktg ily traian YNhteeEhm */             sgn = -1;
/* gmAp4bktg ily traian YNhteeEhm */         } else {
/* gmAp4bktg ily traian YNhteeEhm */             n = c - '0';
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         while (isdigit(c = read_ch())) {
/* gmAp4bktg ily traian YNhteeEhm */             n = 10 * n + c - '0';
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         n *= sgn;
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ };
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ class OutParser {
/* gmAp4bktg ily traian YNhteeEhm */ private:
/* gmAp4bktg ily traian YNhteeEhm */     FILE *fout;
/* gmAp4bktg ily traian YNhteeEhm */     char *buff;
/* gmAp4bktg ily traian YNhteeEhm */     int sp;
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     void write_ch(char ch) {
/* gmAp4bktg ily traian YNhteeEhm */         if (sp == 50000) {
/* gmAp4bktg ily traian YNhteeEhm */             fwrite(buff, 1, 50000, fout);
/* gmAp4bktg ily traian YNhteeEhm */             sp = 0;
/* gmAp4bktg ily traian YNhteeEhm */             buff[sp++] = ch;
/* gmAp4bktg ily traian YNhteeEhm */         } else {
/* gmAp4bktg ily traian YNhteeEhm */             buff[sp++] = ch;
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ public:
/* gmAp4bktg ily traian YNhteeEhm */     OutParser(const char* name) {
/* gmAp4bktg ily traian YNhteeEhm */         fout = fopen(name, "w");
/* gmAp4bktg ily traian YNhteeEhm */         buff = new char[50000]();
/* gmAp4bktg ily traian YNhteeEhm */         sp = 0;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */     ~OutParser() {
/* gmAp4bktg ily traian YNhteeEhm */         fwrite(buff, 1, sp, fout);
/* gmAp4bktg ily traian YNhteeEhm */         fclose(fout);
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     OutParser& operator << (int vu32) {
/* gmAp4bktg ily traian YNhteeEhm */         if (vu32 <= 9) {
/* gmAp4bktg ily traian YNhteeEhm */             write_ch(vu32 + '0');
/* gmAp4bktg ily traian YNhteeEhm */         } else {
/* gmAp4bktg ily traian YNhteeEhm */             (*this) << (vu32 / 10);
/* gmAp4bktg ily traian YNhteeEhm */             write_ch(vu32 % 10 + '0');
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     OutParser& operator << (long long vu64) {
/* gmAp4bktg ily traian YNhteeEhm */         if (vu64 <= 9) {
/* gmAp4bktg ily traian YNhteeEhm */             write_ch(vu64 + '0');
/* gmAp4bktg ily traian YNhteeEhm */         } else {
/* gmAp4bktg ily traian YNhteeEhm */             (*this) << (vu64 / 10);
/* gmAp4bktg ily traian YNhteeEhm */             write_ch(vu64 % 10 + '0');
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */     OutParser& operator << (char ch) {
/* gmAp4bktg ily traian YNhteeEhm */         write_ch(ch);
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */     OutParser& operator << (const char *ch) {
/* gmAp4bktg ily traian YNhteeEhm */         while (*ch) {
/* gmAp4bktg ily traian YNhteeEhm */             write_ch(*ch);
/* gmAp4bktg ily traian YNhteeEhm */             ++ch;
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         return *this;
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ };
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ InParser cin("episodul1.in");
/* gmAp4bktg ily traian YNhteeEhm */ OutParser cout("episodul1.out");
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ struct muchie
/* gmAp4bktg ily traian YNhteeEhm */ {
/* gmAp4bktg ily traian YNhteeEhm */     int i , j , c;
/* gmAp4bktg ily traian YNhteeEhm */ };
/* gmAp4bktg ily traian YNhteeEhm */ int T[1000001] , n , cer , m , t;
/* gmAp4bktg ily traian YNhteeEhm */ long long C[1000001];
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ void leaga(int a , int b , int c)
/* gmAp4bktg ily traian YNhteeEhm */ {
/* gmAp4bktg ily traian YNhteeEhm */     if(T[a] > T[b]) T[a] = T[b] , C[b] = C[a] + C[b] +  c;
/* gmAp4bktg ily traian YNhteeEhm */     else T[b] = T[a] , C[a] = C[a] + C[b] + c;
/* gmAp4bktg ily traian YNhteeEhm */ }
/* gmAp4bktg ily traian YNhteeEhm */ 
/* gmAp4bktg ily traian YNhteeEhm */ int radacina(int a)
/* gmAp4bktg ily traian YNhteeEhm */ {
/* gmAp4bktg ily traian YNhteeEhm */     if(a == T[a]) return a;
/* gmAp4bktg ily traian YNhteeEhm */     else return T[a] = radacina(T[a]);
/* gmAp4bktg ily traian YNhteeEhm */ }
/* gmAp4bktg ily traian YNhteeEhm */ int main()
/* gmAp4bktg ily traian YNhteeEhm */ {
/* gmAp4bktg ily traian YNhteeEhm */     cin >> m;
/* gmAp4bktg ily traian YNhteeEhm */     int x , y , c;
/* gmAp4bktg ily traian YNhteeEhm */     for(int i = 1 ; i <= m ; i++)
/* gmAp4bktg ily traian YNhteeEhm */     {
/* gmAp4bktg ily traian YNhteeEhm */         cin >> cer;
/* gmAp4bktg ily traian YNhteeEhm */         if(cer == 1) n++ , T[n] = n;
/* gmAp4bktg ily traian YNhteeEhm */         else if(cer == 2)
/* gmAp4bktg ily traian YNhteeEhm */         {
/* gmAp4bktg ily traian YNhteeEhm */             cin >> x >> y >> c;
/* gmAp4bktg ily traian YNhteeEhm */             int r1 , r2;
/* gmAp4bktg ily traian YNhteeEhm */             r1 = radacina(x);
/* gmAp4bktg ily traian YNhteeEhm */             r2 = radacina(y);
/* gmAp4bktg ily traian YNhteeEhm */             if(r1 != r2)
/* gmAp4bktg ily traian YNhteeEhm */             {
/* gmAp4bktg ily traian YNhteeEhm */                 t += c;
/* gmAp4bktg ily traian YNhteeEhm */                 leaga(r1 , r2 , c);
/* gmAp4bktg ily traian YNhteeEhm */             }
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */         else
/* gmAp4bktg ily traian YNhteeEhm */         {
/* gmAp4bktg ily traian YNhteeEhm */             cin >> x;
/* gmAp4bktg ily traian YNhteeEhm */             cout << C[radacina(x)] << '\n';
/* gmAp4bktg ily traian YNhteeEhm */         }
/* gmAp4bktg ily traian YNhteeEhm */     }
/* gmAp4bktg ily traian YNhteeEhm */ }