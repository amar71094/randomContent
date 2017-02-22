#include<stdio.h>
int main()
{
 int n,m,i,j;
 scanf("%d %d",&n,&m); 
 long long int x,y;
 int s[m];
 for(i=0;i<m;i++)
 {
   scanf("%d",&s[i]);
 }
 long long int table[n+1][m];
 for(i=0;i<m;i++)
 {
   table[0][i]=1;

 }
 for(i=1;i<n+1;i++)
 {
   for(j=0;j<m;j++)
   {
     x=(i-s[j]>=0)?table[i-s[j]][j]:0;
     y=(j>=1)?table[i][j-1]:0;
     table[i][j]=x+y;
   }
 }
 printf("%lld\n",table[n][m-1]);
 return 0;
}
