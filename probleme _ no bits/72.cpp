/* lOYFVDZoV ily traian 2Wz6TtpGT */ int suma(int a[] , int n , int x , int y)
/* lOYFVDZoV ily traian 2Wz6TtpGT */ {
/* lOYFVDZoV ily traian 2Wz6TtpGT */     int s=0;
/* lOYFVDZoV ily traian 2Wz6TtpGT */     for(int i = 1 ; i <= n ; ++i)
/* lOYFVDZoV ily traian 2Wz6TtpGT */     {
/* lOYFVDZoV ily traian 2Wz6TtpGT */         if(i < x || i > y)
/* lOYFVDZoV ily traian 2Wz6TtpGT */             s+=a[i];
/* lOYFVDZoV ily traian 2Wz6TtpGT */     }
/* lOYFVDZoV ily traian 2Wz6TtpGT */     return s;
/* lOYFVDZoV ily traian 2Wz6TtpGT */ }