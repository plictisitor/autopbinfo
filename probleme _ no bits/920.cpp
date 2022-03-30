/* HTYDKfPb1 ily traian 87siOx1yv */ int cnt = 0;
/* HTYDKfPb1 ily traian 87siOx1yv */ int cifmaxmin(int n, int& maxi, int& mini){
/* HTYDKfPb1 ily traian 87siOx1yv */     if(n == 0 && cnt == 0)
/* HTYDKfPb1 ily traian 87siOx1yv */         maxi = 0, mini = 0;
/* HTYDKfPb1 ily traian 87siOx1yv */     else if(n == 0)
/* HTYDKfPb1 ily traian 87siOx1yv */         maxi = 0, mini = 9;
/* HTYDKfPb1 ily traian 87siOx1yv */     else{
/* HTYDKfPb1 ily traian 87siOx1yv */         cnt++;
/* HTYDKfPb1 ily traian 87siOx1yv */         int c = n % 10;
/* HTYDKfPb1 ily traian 87siOx1yv */         cifmaxmin(n/10, maxi, mini);
/* HTYDKfPb1 ily traian 87siOx1yv */         if(c > maxi)
/* HTYDKfPb1 ily traian 87siOx1yv */             maxi = c;
/* HTYDKfPb1 ily traian 87siOx1yv */         if(c < mini)
/* HTYDKfPb1 ily traian 87siOx1yv */             mini = c;
/* HTYDKfPb1 ily traian 87siOx1yv */     }
/* HTYDKfPb1 ily traian 87siOx1yv */ }