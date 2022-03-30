/* h5Xxj0axv ily traian cCD0mwzmE */ #include <algorithm>
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
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ using namespace std;
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ int n , p;
/* h5Xxj0axv ily traian cCD0mwzmE */ char c;
/* h5Xxj0axv ily traian cCD0mwzmE */ struct poz
/* h5Xxj0axv ily traian cCD0mwzmE */ {
/* h5Xxj0axv ily traian cCD0mwzmE */     char prenume[80] , nume[80] , tel[80] , email[80] , fct[80];
/* h5Xxj0axv ily traian cCD0mwzmE */     unsigned long long salariu , varsta , pozz;
/* h5Xxj0axv ily traian cCD0mwzmE */ }a[256];
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_prenume(poz a , poz b){return strcmp(a.prenume , b.prenume) < 0 || strcmp(a.prenume , b.prenume) == 0 && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_nume(poz a , poz b){return strcmp(a.nume , b.nume) < 0 || strcmp(a.nume , b.nume) == 0 && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_tel(poz a , poz b){return strcmp(a.tel , b.tel) < 0 || strcmp(a.tel , b.tel) == 0 && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_email(poz a , poz b){return strcmp(a.email , b.email) < 0 || strcmp(a.email , b.email) == 0 && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_fct(poz a , poz b){return strcmp(a.fct , b.fct) < 0 || strcmp(a.fct , b.fct) == 0 && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_salariu(poz a , poz b){return a.salariu < b.salariu || a.salariu == b.salariu && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_varsta(poz a , poz b){return a.varsta < b.varsta || a.varsta == b.varsta && a.pozz < b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_prenume1(poz a , poz b){return strcmp(a.prenume , b.prenume) > 0 || strcmp(a.prenume , b.prenume) == 0 && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_nume1(poz a , poz b){return strcmp(a.nume , b.nume) > 0 || strcmp(a.nume , b.nume) == 0 && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_tel1(poz a , poz b){return strcmp(a.tel , b.tel) > 0 || strcmp(a.tel , b.tel) == 0 && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_email1(poz a , poz b){return strcmp(a.email , b.email) > 0 || strcmp(a.email , b.email) == 0 && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_fct1(poz a , poz b){return strcmp(a.fct , b.fct) > 0 || strcmp(a.fct , b.fct) == 0 && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_salariu1(poz a , poz b){return a.salariu > b.salariu || a.salariu == b.salariu && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int comp_varsta1(poz a , poz b){return a.varsta > b.varsta || a.varsta == b.varsta && a.pozz > b.pozz;}
/* h5Xxj0axv ily traian cCD0mwzmE */ int main()
/* h5Xxj0axv ily traian cCD0mwzmE */ {
/* h5Xxj0axv ily traian cCD0mwzmE */     cin >> n;
/* h5Xxj0axv ily traian cCD0mwzmE */     for(int i = 1 ; i <= n ; i++)
/* h5Xxj0axv ily traian cCD0mwzmE */     {
/* h5Xxj0axv ily traian cCD0mwzmE */         cin >> a[i].prenume >> a[i].nume >> a[i].salariu >> a[i].varsta >> a[i].fct >> a[i].tel >> a[i].email;
/* h5Xxj0axv ily traian cCD0mwzmE */         a[i].pozz = i;
/* h5Xxj0axv ily traian cCD0mwzmE */     }
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */     cin >> p >> c;
/* h5Xxj0axv ily traian cCD0mwzmE */     if(c == '+')
/* h5Xxj0axv ily traian cCD0mwzmE */     {
/* h5Xxj0axv ily traian cCD0mwzmE */         if(p == 1) sort(a + 1 , a + n + 1 , comp_prenume);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 2) sort(a + 1 , a + n + 1 , comp_nume);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 3) sort(a + 1 , a + n + 1 , comp_salariu);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 4) sort(a + 1 , a + n + 1 , comp_varsta);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 5) sort(a + 1 , a + n + 1 , comp_fct);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 6) sort(a + 1 , a + n + 1 , comp_tel);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 7) sort(a + 1 , a + n + 1 , comp_email);
/* h5Xxj0axv ily traian cCD0mwzmE */         for(int i = 1 ; i <= n ; i++)
/* h5Xxj0axv ily traian cCD0mwzmE */             cout << a[i].prenume << " " << a[i].nume << " " << a[i].salariu << " " << a[i].varsta<< " " << a[i].fct << " " << a[i].tel << " " << a[i].email << '\n';
/* h5Xxj0axv ily traian cCD0mwzmE */     }
/* h5Xxj0axv ily traian cCD0mwzmE */     else if(c == '-')
/* h5Xxj0axv ily traian cCD0mwzmE */     {
/* h5Xxj0axv ily traian cCD0mwzmE */         if(p == 1) sort(a + 1 , a + n + 1 , comp_prenume1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 2) sort(a + 1 , a + n + 1 , comp_nume1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 3) sort(a + 1 , a + n + 1 , comp_salariu1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 4) sort(a + 1 , a + n + 1 , comp_varsta1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 5) sort(a + 1 , a + n + 1 , comp_fct1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 6) sort(a + 1 , a + n + 1 , comp_tel1);
/* h5Xxj0axv ily traian cCD0mwzmE */         else if(p == 7) sort(a + 1 , a + n + 1 , comp_email1);
/* h5Xxj0axv ily traian cCD0mwzmE */         for(int i = 1 ; i <= n ; i++)
/* h5Xxj0axv ily traian cCD0mwzmE */             cout << a[i].prenume << " " << a[i].nume << " " << a[i].salariu << " " << a[i].varsta<< " " << a[i].fct << " " << a[i].tel << " " << a[i].email << '\n';
/* h5Xxj0axv ily traian cCD0mwzmE */     }
/* h5Xxj0axv ily traian cCD0mwzmE */ 
/* h5Xxj0axv ily traian cCD0mwzmE */ }