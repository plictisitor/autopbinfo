/* HGvApYtyS ily traian 1iTEmAIMl */ #include<iostream>
/* HGvApYtyS ily traian 1iTEmAIMl */ using namespace std;
/* HGvApYtyS ily traian 1iTEmAIMl */ int main()
/* HGvApYtyS ily traian 1iTEmAIMl */ {
/* HGvApYtyS ily traian 1iTEmAIMl */    int n,s=0;
/* HGvApYtyS ily traian 1iTEmAIMl */    cin>>n;
/* HGvApYtyS ily traian 1iTEmAIMl */    n=n/10;
/* HGvApYtyS ily traian 1iTEmAIMl */    while(n!=0)
/* HGvApYtyS ily traian 1iTEmAIMl */    {
/* HGvApYtyS ily traian 1iTEmAIMl */        s=s+n%10;
/* HGvApYtyS ily traian 1iTEmAIMl */        n=n/100;
/* HGvApYtyS ily traian 1iTEmAIMl */    }
/* HGvApYtyS ily traian 1iTEmAIMl */    cout<<s;
/* HGvApYtyS ily traian 1iTEmAIMl */   return 0;
/* HGvApYtyS ily traian 1iTEmAIMl */ }