/* ytWkpjMoc ily traian 3UdmnslPg */ #include<iostream>
/* ytWkpjMoc ily traian 3UdmnslPg */ using namespace std;
/* ytWkpjMoc ily traian 3UdmnslPg */ int main()
/* ytWkpjMoc ily traian 3UdmnslPg */ {
/* ytWkpjMoc ily traian 3UdmnslPg */    int n,s=0,ogl=0,c,cate=0,k=0,aux,a,j=0;
/* ytWkpjMoc ily traian 3UdmnslPg */    cin>>n>>c;
/* ytWkpjMoc ily traian 3UdmnslPg */    aux=n;
/* ytWkpjMoc ily traian 3UdmnslPg */    a=n;
/* ytWkpjMoc ily traian 3UdmnslPg */    while(a!=0)
/* ytWkpjMoc ily traian 3UdmnslPg */    {
/* ytWkpjMoc ily traian 3UdmnslPg */        if(a%10!=0) break;
/* ytWkpjMoc ily traian 3UdmnslPg */        else
/* ytWkpjMoc ily traian 3UdmnslPg */        if(a%10==0) j++;
/* ytWkpjMoc ily traian 3UdmnslPg */        a=a/10;
/* ytWkpjMoc ily traian 3UdmnslPg */    }
/* ytWkpjMoc ily traian 3UdmnslPg */    while(aux!=0)
/* ytWkpjMoc ily traian 3UdmnslPg */    {
/* ytWkpjMoc ily traian 3UdmnslPg */        cate++;
/* ytWkpjMoc ily traian 3UdmnslPg */        if(aux%10==c) {k++;}
/* ytWkpjMoc ily traian 3UdmnslPg */        aux=aux/10;
/* ytWkpjMoc ily traian 3UdmnslPg */    }
/* ytWkpjMoc ily traian 3UdmnslPg */ {
/* ytWkpjMoc ily traian 3UdmnslPg */         while(n!=0)
/* ytWkpjMoc ily traian 3UdmnslPg */        {
/* ytWkpjMoc ily traian 3UdmnslPg */           if(n%10!=c)
/* ytWkpjMoc ily traian 3UdmnslPg */             s=s*10+n%10;
/* ytWkpjMoc ily traian 3UdmnslPg */           else if(n%10==c)
/* ytWkpjMoc ily traian 3UdmnslPg */             s=s;
/* ytWkpjMoc ily traian 3UdmnslPg */           n=n/10;
/* ytWkpjMoc ily traian 3UdmnslPg */        }
/* ytWkpjMoc ily traian 3UdmnslPg */ 
/* ytWkpjMoc ily traian 3UdmnslPg */        while(s!=0)
/* ytWkpjMoc ily traian 3UdmnslPg */        {
/* ytWkpjMoc ily traian 3UdmnslPg */            ogl=ogl*10+s%10;
/* ytWkpjMoc ily traian 3UdmnslPg */            s=s/10;
/* ytWkpjMoc ily traian 3UdmnslPg */        }
/* ytWkpjMoc ily traian 3UdmnslPg */     }
/* ytWkpjMoc ily traian 3UdmnslPg */    if(cate==k) cout<<"-1";
/* ytWkpjMoc ily traian 3UdmnslPg */    else
/* ytWkpjMoc ily traian 3UdmnslPg */     if(cate!=k)
/* ytWkpjMoc ily traian 3UdmnslPg */     {
/* ytWkpjMoc ily traian 3UdmnslPg */         cout<<ogl;
/* ytWkpjMoc ily traian 3UdmnslPg */         while(j>0)
/* ytWkpjMoc ily traian 3UdmnslPg */         {
/* ytWkpjMoc ily traian 3UdmnslPg */             cout<<"0";
/* ytWkpjMoc ily traian 3UdmnslPg */             j--;
/* ytWkpjMoc ily traian 3UdmnslPg */         }
/* ytWkpjMoc ily traian 3UdmnslPg */     }
/* ytWkpjMoc ily traian 3UdmnslPg */ 
/* ytWkpjMoc ily traian 3UdmnslPg */ 
/* ytWkpjMoc ily traian 3UdmnslPg */   return 0;
/* ytWkpjMoc ily traian 3UdmnslPg */ }