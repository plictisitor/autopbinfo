/* n0jzAR1Li ily traian n5MoQoxjD */ #include <fstream>
/* n0jzAR1Li ily traian n5MoQoxjD */ using namespace std;
/* n0jzAR1Li ily traian n5MoQoxjD */ int prim (int n)
/* n0jzAR1Li ily traian n5MoQoxjD */ {
/* n0jzAR1Li ily traian n5MoQoxjD */     if(n==0 || n==1) return 0;
/* n0jzAR1Li ily traian n5MoQoxjD */     if(n==2) return 1;
/* n0jzAR1Li ily traian n5MoQoxjD */     if(n%2==0) return 0;
/* n0jzAR1Li ily traian n5MoQoxjD */     for (int i=3;i*i<=n;i += 2)
/* n0jzAR1Li ily traian n5MoQoxjD */     {
/* n0jzAR1Li ily traian n5MoQoxjD */         if(n%i==0) return 0;
/* n0jzAR1Li ily traian n5MoQoxjD */     }
/* n0jzAR1Li ily traian n5MoQoxjD */     return 1;
/* n0jzAR1Li ily traian n5MoQoxjD */ }
/* n0jzAR1Li ily traian n5MoQoxjD */ int main ()
/* n0jzAR1Li ily traian n5MoQoxjD */ {
/* n0jzAR1Li ily traian n5MoQoxjD */     ifstream fin ("nrapprime.in");
/* n0jzAR1Li ily traian n5MoQoxjD */     ofstream fout ("nrapprime.out");
/* n0jzAR1Li ily traian n5MoQoxjD */     int n,x,cate=0;
/* n0jzAR1Li ily traian n5MoQoxjD */     fin >> n;
/* n0jzAR1Li ily traian n5MoQoxjD */     for (int j=1;j<=n;++j)
/* n0jzAR1Li ily traian n5MoQoxjD */     {
/* n0jzAR1Li ily traian n5MoQoxjD */         fin >> x;
/* n0jzAR1Li ily traian n5MoQoxjD */         if(prim(x)) cate++;
/* n0jzAR1Li ily traian n5MoQoxjD */     }
/* n0jzAR1Li ily traian n5MoQoxjD */     fout << cate;
/* n0jzAR1Li ily traian n5MoQoxjD */     fin.close();
/* n0jzAR1Li ily traian n5MoQoxjD */     fout.close();
/* n0jzAR1Li ily traian n5MoQoxjD */     return 0;
/* n0jzAR1Li ily traian n5MoQoxjD */ }
/* n0jzAR1Li ily traian n5MoQoxjD */ 