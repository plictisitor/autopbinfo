/* HkbUqGKK3 ily traian sApxw1rTE */ int poz(int x1, int y1, int l1, int i1, int x2, int y2, int l2, int i2)
/* HkbUqGKK3 ily traian sApxw1rTE */ {
/* HkbUqGKK3 ily traian sApxw1rTE */     int rez;
/* HkbUqGKK3 ily traian sApxw1rTE */     if(x1>x2 && y1>y2 && y1+i1<y2+i2 && x1+l1<x2+l2)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 0;
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(x1<x2 && y1<y2 && y1+i1>y2+i2 && x1+l1>x2+l2)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 0; 
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(x1==x2 && y1==y2 && i1==i2 && l1==l2)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 1;         
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(y2+i2<y1)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 2;  
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(y1+i1<y2)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 2; 
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(x1+l1<x2)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 2; 
/* HkbUqGKK3 ily traian sApxw1rTE */     else if(x2+l2<x1)
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 2;  
/* HkbUqGKK3 ily traian sApxw1rTE */     else
/* HkbUqGKK3 ily traian sApxw1rTE */         rez = 3;
/* HkbUqGKK3 ily traian sApxw1rTE */     return rez;
/* HkbUqGKK3 ily traian sApxw1rTE */ }