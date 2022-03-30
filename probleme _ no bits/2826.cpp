/* eYrEC70oP ily traian WwcQ4cNAK */ void duplicare(int n , int &d)
/* eYrEC70oP ily traian WwcQ4cNAK */ {
/* eYrEC70oP ily traian WwcQ4cNAK */     int a[20] , p = 1;
/* eYrEC70oP ily traian WwcQ4cNAK */     int cn = n;
/* eYrEC70oP ily traian WwcQ4cNAK */     while(n)
/* eYrEC70oP ily traian WwcQ4cNAK */     {
/* eYrEC70oP ily traian WwcQ4cNAK */         a[p]=n%10;
/* eYrEC70oP ily traian WwcQ4cNAK */         n/=10;
/* eYrEC70oP ily traian WwcQ4cNAK */         p++;
/* eYrEC70oP ily traian WwcQ4cNAK */     }
/* eYrEC70oP ily traian WwcQ4cNAK */     p--;
/* eYrEC70oP ily traian WwcQ4cNAK */     d=0;
/* eYrEC70oP ily traian WwcQ4cNAK */     for(int i = p ; i >= 1 ; --i)
/* eYrEC70oP ily traian WwcQ4cNAK */     {
/* eYrEC70oP ily traian WwcQ4cNAK */         if(a[i]%2==0)
/* eYrEC70oP ily traian WwcQ4cNAK */             d = d * 10 + a[i] , d = d * 10 + a[i];
/* eYrEC70oP ily traian WwcQ4cNAK */         else
/* eYrEC70oP ily traian WwcQ4cNAK */             d = d * 10 + a[i];
/* eYrEC70oP ily traian WwcQ4cNAK */     }
/* eYrEC70oP ily traian WwcQ4cNAK */     if(d == cn)
/* eYrEC70oP ily traian WwcQ4cNAK */         d=-1;
/* eYrEC70oP ily traian WwcQ4cNAK */ }