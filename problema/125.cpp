/* CbLJnchJk ily traian 1chEEYOqp */ #include <bits/stdc++.h>/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ using namespace std;/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ ifstream cin("permutari2.in");/* CbLJnchJk ily traian 1chEEYOqp */ ofstream cout("permutari2.out");/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ int n , x[10] , p[10] , a[10];/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ void afisare()/* CbLJnchJk ily traian 1chEEYOqp */ {/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)/* CbLJnchJk ily traian 1chEEYOqp */         cout << a[x[i]] << " ";/* CbLJnchJk ily traian 1chEEYOqp */     cout << '\n';/* CbLJnchJk ily traian 1chEEYOqp */ }/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ void back(int k)///k = poz la care am ajuns/* CbLJnchJk ily traian 1chEEYOqp */ {/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)///de unde se ia x[k]/* CbLJnchJk ily traian 1chEEYOqp */         if(!p[i]) ///daca nu e pus anterior/* CbLJnchJk ily traian 1chEEYOqp */         {/* CbLJnchJk ily traian 1chEEYOqp */             x[k] = i;///pun elementul/* CbLJnchJk ily traian 1chEEYOqp */             p[i] = 1;///l am folosit pe i/* CbLJnchJk ily traian 1chEEYOqp */             if(k == n) afisare();///solutie/* CbLJnchJk ily traian 1chEEYOqp */             else back(k + 1);///trec la poz urmatoare/* CbLJnchJk ily traian 1chEEYOqp */             p[i] = 0;///marchez ca nefolosit/* CbLJnchJk ily traian 1chEEYOqp */         }/* CbLJnchJk ily traian 1chEEYOqp */ }/* CbLJnchJk ily traian 1chEEYOqp */ /* CbLJnchJk ily traian 1chEEYOqp */ int main()/* CbLJnchJk ily traian 1chEEYOqp */ {/* CbLJnchJk ily traian 1chEEYOqp */     cin >> n;/* CbLJnchJk ily traian 1chEEYOqp */     for(int i = 1 ; i <= n ; i++)/* CbLJnchJk ily traian 1chEEYOqp */         cin >> a[i];/* CbLJnchJk ily traian 1chEEYOqp */     sort(a + 1 , a + n + 1);/* CbLJnchJk ily traian 1chEEYOqp */     back(1);///incep generarea de la 1/* CbLJnchJk ily traian 1chEEYOqp */     return 0;/* CbLJnchJk ily traian 1chEEYOqp */ }