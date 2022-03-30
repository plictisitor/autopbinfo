/* L6BDFPOXX ily traian hCHjeXi0Z */ void triplete(int a , int b , int c)
/* L6BDFPOXX ily traian hCHjeXi0Z */ {
/* L6BDFPOXX ily traian hCHjeXi0Z */     int cnt = 0;
/* L6BDFPOXX ily traian hCHjeXi0Z */     for(int i = a ; i <= b ; ++i)
/* L6BDFPOXX ily traian hCHjeXi0Z */         for(int j = i ; j <= b ; ++j)
/* L6BDFPOXX ily traian hCHjeXi0Z */                 if(c - (i + j) >= j && c - (i + j) <= b)
/* L6BDFPOXX ily traian hCHjeXi0Z */                     cout << '{' << i << ',' << j << ',' << c - (i + j) << '}' << endl, cnt++;
/* L6BDFPOXX ily traian hCHjeXi0Z */     if(cnt==0)
/* L6BDFPOXX ily traian hCHjeXi0Z */         cout << "nu exista";
/* L6BDFPOXX ily traian hCHjeXi0Z */ }