/* 5Lu8DkGTF ily traian dIHdpl3uw */ #include <algorithm>
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
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ #define NM 3002
/* 5Lu8DkGTF ily traian dIHdpl3uw */ #define QM 300002
/* 5Lu8DkGTF ily traian dIHdpl3uw */ #define XM 1000000000000000
/* 5Lu8DkGTF ily traian dIHdpl3uw */ #define INF XM
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ using namespace std;
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ class InParser {
/* 5Lu8DkGTF ily traian dIHdpl3uw */ private:
/* 5Lu8DkGTF ily traian dIHdpl3uw */     FILE *fin;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     char *buff;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int sp;
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     char read_ch() {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         ++sp;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (sp == 4096) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             sp = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             fread(buff, 1, 4096, fin);
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return buff[sp];
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ public:
/* 5Lu8DkGTF ily traian dIHdpl3uw */     InParser(const char* nume) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fin = fopen(nume, "r");
/* 5Lu8DkGTF ily traian dIHdpl3uw */         buff = new char[4096]();
/* 5Lu8DkGTF ily traian dIHdpl3uw */         sp = 4095;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     InParser& operator >> (int &n) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         char c;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while (!isdigit(c = read_ch()) && c != '-');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         int sgn = 1;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (c == '-') {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             sgn = -1;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         } else {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = c - '0';
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while (isdigit(c = read_ch())) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = 10 * n + c - '0';
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         n *= sgn;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     InParser& operator >> (long long &n) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         char c;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         n = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while (!isdigit(c = read_ch()) && c != '-');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         long long sgn = 1;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (c == '-') {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             sgn = -1;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         } else {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = c - '0';
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while (isdigit(c = read_ch())) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             n = 10 * n + c - '0';
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         n *= sgn;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ };
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ class OutParser {
/* 5Lu8DkGTF ily traian dIHdpl3uw */ private:
/* 5Lu8DkGTF ily traian dIHdpl3uw */     FILE *fout;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     char *buff;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int sp;
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     void write_ch(char ch) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (sp == 50000) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             fwrite(buff, 1, 50000, fout);
/* 5Lu8DkGTF ily traian dIHdpl3uw */             sp = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             buff[sp++] = ch;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         } else {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             buff[sp++] = ch;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ public:
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser(const char* name) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fout = fopen(name, "w");
/* 5Lu8DkGTF ily traian dIHdpl3uw */         buff = new char[50000]();
/* 5Lu8DkGTF ily traian dIHdpl3uw */         sp = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */     ~OutParser() {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fwrite(buff, 1, sp, fout);
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fclose(fout);
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser& operator << (int vu32) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (vu32 <= 9) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             write_ch(vu32 + '0');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         } else {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             (*this) << (vu32 / 10);
/* 5Lu8DkGTF ily traian dIHdpl3uw */             write_ch(vu32 % 10 + '0');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser& operator << (long long vu64) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if (vu64 <= 9) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             write_ch(vu64 + '0');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         } else {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             (*this) << (vu64 / 10);
/* 5Lu8DkGTF ily traian dIHdpl3uw */             write_ch(vu64 % 10 + '0');
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser& operator << (char ch) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         write_ch(ch);
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser& operator << (const char *ch) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while (*ch) {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             write_ch(*ch);
/* 5Lu8DkGTF ily traian dIHdpl3uw */             ++ch;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return *this;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ };
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ int n;
/* 5Lu8DkGTF ily traian dIHdpl3uw */ struct sir
/* 5Lu8DkGTF ily traian dIHdpl3uw */ {
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int val;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int distincte;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int sum;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int prod;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     bool operator <(const sir &B) const
/* 5Lu8DkGTF ily traian dIHdpl3uw */     {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if(this->distincte != B.distincte) return this->distincte > B.distincte;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if(this->sum != B.sum) return this->sum < B.sum;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         if(this->prod != B.prod) return this->prod < B.prod;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         return this->val < B.val;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */ }A[1000001];
/* 5Lu8DkGTF ily traian dIHdpl3uw */ 
/* 5Lu8DkGTF ily traian dIHdpl3uw */ int main()
/* 5Lu8DkGTF ily traian dIHdpl3uw */ {
/* 5Lu8DkGTF ily traian dIHdpl3uw */     InParser fin("sort4.in");
/* 5Lu8DkGTF ily traian dIHdpl3uw */     OutParser fout("sort4.out");
/* 5Lu8DkGTF ily traian dIHdpl3uw */     fin >> n;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     int x,c,s,p;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     for(int i = 1; i <= n; i++)
/* 5Lu8DkGTF ily traian dIHdpl3uw */     {
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fin >> A[i].val;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         x=A[i].val;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         int F[11]={0};
/* 5Lu8DkGTF ily traian dIHdpl3uw */         s = 0,p=1,c = 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         while(x)
/* 5Lu8DkGTF ily traian dIHdpl3uw */         {
/* 5Lu8DkGTF ily traian dIHdpl3uw */             F[x%10]++;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             s=s+x%10;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             p=p*(x%10);
/* 5Lu8DkGTF ily traian dIHdpl3uw */             if(F[x%10]==1) c++;
/* 5Lu8DkGTF ily traian dIHdpl3uw */             x/=10;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         }
/* 5Lu8DkGTF ily traian dIHdpl3uw */         A[i].distincte = c;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         A[i].sum = s;
/* 5Lu8DkGTF ily traian dIHdpl3uw */         A[i].prod = p;
/* 5Lu8DkGTF ily traian dIHdpl3uw */     }
/* 5Lu8DkGTF ily traian dIHdpl3uw */     sort(A+1,A+n+1);
/* 5Lu8DkGTF ily traian dIHdpl3uw */     for(int i = 1; i <= n; i++)
/* 5Lu8DkGTF ily traian dIHdpl3uw */         fout<<A[i].val<<' ';
/* 5Lu8DkGTF ily traian dIHdpl3uw */     return 0;
/* 5Lu8DkGTF ily traian dIHdpl3uw */ }