/* JplDzC3fh ily traian O8PtXUGuY */ #include<iostream>
/* JplDzC3fh ily traian O8PtXUGuY */ using namespace std;
/* JplDzC3fh ily traian O8PtXUGuY */ int main()
/* JplDzC3fh ily traian O8PtXUGuY */ {
/* JplDzC3fh ily traian O8PtXUGuY */     int n , m , a[1002][1002] , x , y , z , cnt = 0 , k;
/* JplDzC3fh ily traian O8PtXUGuY */     cin >> n >> m >> k;
/* JplDzC3fh ily traian O8PtXUGuY */     for(int i = 1 ; i <= n ; i++)
/* JplDzC3fh ily traian O8PtXUGuY */         for(int j = 1 ; j <= m ; j++)
/* JplDzC3fh ily traian O8PtXUGuY */             a[i][j]=-1;
/* JplDzC3fh ily traian O8PtXUGuY */     for(int i = 1 ; i <= k ; i++)
/* JplDzC3fh ily traian O8PtXUGuY */     {
/* JplDzC3fh ily traian O8PtXUGuY */         cin >> x >> y >> z;
/* JplDzC3fh ily traian O8PtXUGuY */         a[x][y]=z;
/* JplDzC3fh ily traian O8PtXUGuY */         for(int l = 1 ; l < z ; l++)
/* JplDzC3fh ily traian O8PtXUGuY */         {
/* JplDzC3fh ily traian O8PtXUGuY */             if(x + l <= n && y + l <= m)a[x+l][y+l]=z;
/* JplDzC3fh ily traian O8PtXUGuY */             if(x + l <= n && y - l > 0)a[x+l][y-l]=z;
/* JplDzC3fh ily traian O8PtXUGuY */             if(x - l > 0 && y + l <= m)a[x-l][y+l]=z;
/* JplDzC3fh ily traian O8PtXUGuY */             if(x - l > 0 && y - l > 0) a[x-l][y-l]=z;
/* JplDzC3fh ily traian O8PtXUGuY */         }
/* JplDzC3fh ily traian O8PtXUGuY */     }
/* JplDzC3fh ily traian O8PtXUGuY */     for(int i = 1 ; i <= n ; i++)
/* JplDzC3fh ily traian O8PtXUGuY */         for(int j = 1 ; j <= m ; j++)
/* JplDzC3fh ily traian O8PtXUGuY */             if(a[i][j]==-1) cnt++;
/* JplDzC3fh ily traian O8PtXUGuY */     cout<<cnt;
/* JplDzC3fh ily traian O8PtXUGuY */     return 0;
/* JplDzC3fh ily traian O8PtXUGuY */ }