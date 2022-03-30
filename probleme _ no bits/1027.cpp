/* EHXAHAyHj ily traian 39IJ2ZiNe */ # include <cstdio>
/* EHXAHAyHj ily traian 39IJ2ZiNe */ # include <cstring>
/* EHXAHAyHj ily traian 39IJ2ZiNe */ # define NMax 5003
/* EHXAHAyHj ily traian 39IJ2ZiNe */ # define Nmax 1003
/* EHXAHAyHj ily traian 39IJ2ZiNe */ using namespace std;
/* EHXAHAyHj ily traian 39IJ2ZiNe */ 
/* EHXAHAyHj ily traian 39IJ2ZiNe */ int a[NMax], ap[Nmax];
/* EHXAHAyHj ily traian 39IJ2ZiNe */ int n, Max, nr;
/* EHXAHAyHj ily traian 39IJ2ZiNe */ 
/* EHXAHAyHj ily traian 39IJ2ZiNe */ void cool()
/* EHXAHAyHj ily traian 39IJ2ZiNe */ {
/* EHXAHAyHj ily traian 39IJ2ZiNe */     int i, j, k, min, max;
/* EHXAHAyHj ily traian 39IJ2ZiNe */     for (i=1; i < n; ++i)
/* EHXAHAyHj ily traian 39IJ2ZiNe */     {
/* EHXAHAyHj ily traian 39IJ2ZiNe */         min = a[i]; max = a[i];
/* EHXAHAyHj ily traian 39IJ2ZiNe */         ap[a[i]] = 1;
/* EHXAHAyHj ily traian 39IJ2ZiNe */         for (j=i+1; j<=n; ++j)
/* EHXAHAyHj ily traian 39IJ2ZiNe */         {
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if (ap[a[j]]) break;
/* EHXAHAyHj ily traian 39IJ2ZiNe */             ap[a[j]] = 1;
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if(a[j] < min) min = a[j];
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if(a[j] > max) max = a[j];
/* EHXAHAyHj ily traian 39IJ2ZiNe */             k = j - i + 1;
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if(max - min == k - 1)
/* EHXAHAyHj ily traian 39IJ2ZiNe */             {
/* EHXAHAyHj ily traian 39IJ2ZiNe */                 if (k > Max) Max = k, nr = 1;
/* EHXAHAyHj ily traian 39IJ2ZiNe */                         else if (k == Max) ++nr;
/* EHXAHAyHj ily traian 39IJ2ZiNe */             }
/* EHXAHAyHj ily traian 39IJ2ZiNe */         }
/* EHXAHAyHj ily traian 39IJ2ZiNe */         memset(ap, 0, sizeof(ap));
/* EHXAHAyHj ily traian 39IJ2ZiNe */     }
/* EHXAHAyHj ily traian 39IJ2ZiNe */ }
/* EHXAHAyHj ily traian 39IJ2ZiNe */ int main()
/* EHXAHAyHj ily traian 39IJ2ZiNe */ {
/* EHXAHAyHj ily traian 39IJ2ZiNe */     int i, k, p, Min = 1001, nr_dist = 0;
/* EHXAHAyHj ily traian 39IJ2ZiNe */ 
/* EHXAHAyHj ily traian 39IJ2ZiNe */     freopen ("cool.in", "r", stdin);
/* EHXAHAyHj ily traian 39IJ2ZiNe */     freopen ("cool.out","w", stdout);
/* EHXAHAyHj ily traian 39IJ2ZiNe */ 
/* EHXAHAyHj ily traian 39IJ2ZiNe */     scanf("%d", &p);
/* EHXAHAyHj ily traian 39IJ2ZiNe */     scanf("%d %d", &n, &k);
/* EHXAHAyHj ily traian 39IJ2ZiNe */     for (i=1; i<=n; ++i)
/* EHXAHAyHj ily traian 39IJ2ZiNe */         scanf("%d", &a[i]);
/* EHXAHAyHj ily traian 39IJ2ZiNe */ 
/* EHXAHAyHj ily traian 39IJ2ZiNe */     if (p == 1)
/* EHXAHAyHj ily traian 39IJ2ZiNe */     {   //a
/* EHXAHAyHj ily traian 39IJ2ZiNe */         for (i=1; i<=k; ++i)
/* EHXAHAyHj ily traian 39IJ2ZiNe */         {
/* EHXAHAyHj ily traian 39IJ2ZiNe */             ap[a[i]]++;
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if (a[i] < Min) Min = a[i];
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if (a[i] > Max) Max = a[i];
/* EHXAHAyHj ily traian 39IJ2ZiNe */         }
/* EHXAHAyHj ily traian 39IJ2ZiNe */         for (i=Min; i<=Max; ++i)
/* EHXAHAyHj ily traian 39IJ2ZiNe */             if (ap[i] == 1) ++nr_dist;
/* EHXAHAyHj ily traian 39IJ2ZiNe */         if (nr_dist == k) printf("%d\n", Max);
/* EHXAHAyHj ily traian 39IJ2ZiNe */                      else printf("%d\n", nr_dist);
/* EHXAHAyHj ily traian 39IJ2ZiNe */     }
/* EHXAHAyHj ily traian 39IJ2ZiNe */     else
/* EHXAHAyHj ily traian 39IJ2ZiNe */     {   //b
/* EHXAHAyHj ily traian 39IJ2ZiNe */         cool();
/* EHXAHAyHj ily traian 39IJ2ZiNe */         printf("%d\n%d\n", Max, nr);
/* EHXAHAyHj ily traian 39IJ2ZiNe */     }
/* EHXAHAyHj ily traian 39IJ2ZiNe */     return 0;
/* EHXAHAyHj ily traian 39IJ2ZiNe */ }