/* ShVYJ1s0g ily traian HCEOYOFXL */ int numarare(nod * p)
/* ShVYJ1s0g ily traian HCEOYOFXL */ {
/* ShVYJ1s0g ily traian HCEOYOFXL */     int cnt = 0;
/* ShVYJ1s0g ily traian HCEOYOFXL */     if(!p)return 0;
/* ShVYJ1s0g ily traian HCEOYOFXL */     while(p -> urm != 0)
/* ShVYJ1s0g ily traian HCEOYOFXL */     {
/* ShVYJ1s0g ily traian HCEOYOFXL */         if(p -> info == p -> urm -> info)cnt ++;
/* ShVYJ1s0g ily traian HCEOYOFXL */         p = p -> urm;
/* ShVYJ1s0g ily traian HCEOYOFXL */     }
/* ShVYJ1s0g ily traian HCEOYOFXL */     return cnt;
/* ShVYJ1s0g ily traian HCEOYOFXL */ }