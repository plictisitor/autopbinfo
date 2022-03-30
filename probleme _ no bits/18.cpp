/* drYXWsOyH ily traian TFOUSAPUd */ #include <fstream>
/* drYXWsOyH ily traian TFOUSAPUd */ using namespace std;
/* drYXWsOyH ily traian TFOUSAPUd */ ifstream fin("nrdiv.in");
/* drYXWsOyH ily traian TFOUSAPUd */ ofstream fout("nrdiv.out");
/* drYXWsOyH ily traian TFOUSAPUd */ int main()
/* drYXWsOyH ily traian TFOUSAPUd */ {
/* drYXWsOyH ily traian TFOUSAPUd */     int n,cate=0;
/* drYXWsOyH ily traian TFOUSAPUd */     fin>>n;
/* drYXWsOyH ily traian TFOUSAPUd */     for(int i=1;i*i<=n;i++)
/* drYXWsOyH ily traian TFOUSAPUd */     {
/* drYXWsOyH ily traian TFOUSAPUd */         if(n%i==0) cate=cate+2;
/* drYXWsOyH ily traian TFOUSAPUd */         if(i*i==n) cate--;
/* drYXWsOyH ily traian TFOUSAPUd */     }
/* drYXWsOyH ily traian TFOUSAPUd */     fout<<cate;
/* drYXWsOyH ily traian TFOUSAPUd */     return 0;
/* drYXWsOyH ily traian TFOUSAPUd */ }