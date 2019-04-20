#include "stdafx.h"
int main(){
int i,j,k,z=0,h=0,t1[19],t2[19],t3[19],f=0,p=0,v=0,q,c=1,n=20,b=0,t4=0;
const int r=26;
double km,kn;
int x[r]={1,1,2,3,3,4,4,5,5,6,7,8,9,10,11,12,12,13,13,14,15,16,18,18,19,19};
int y[r]={6,18,14,6,13,12,14,13,19,7,17,9,0,9,17,11,15,7,16,15,8,10,9,0,9,0};
int A[20][20]={0},A2[20][20],A3[20][20],A4[20][20],D[20][20]={0};
printf("C matrici i syun@ nerkayacvac toxov\n");
for(i=0;i<26;i++)
	printf("%2d ",x[i]);
printf("\nC matrici j syun@ nerkayacvac toxov\n");
for(i=0;i<26;i++)
	printf("%2d ",y[i]);
printf("\nGtnenq bolor miacumneri erkarutyunner@ hashvenq n@\n");
for(i=0;i<26;i++){
	q=y[i];
for(k=0;k<26;k++){
for(j=0;j<26;j++){
	if(x[j]==q){
		c++;q=y[j];}}}
printf("%d ",c);
if(c>b)b=c;c=1;}
printf("\nn=%d",b);
printf("\nT1 zangvac\n");
for(i=1;i<20;i++){
for(j=0;j<26;j++){
   if(i==y[j])z=1;}
if(z!=1){ t1[h]=i;
	printf("%d ",t1[h]);h++;z=0;}}
printf("\nT2 zangvac\n");
for(i=0;i<26;i++){
for(j=0;j<26;j++){
	if(x[i]==y[j] && p==0 && y[i]!=0 && x[i]!=t2[f-1]){
	   t2[f]=x[i];printf("%d ",t2[f]);f++;p=1;
   }}p=0;}
printf("\nT3 zangvac\n");
for(j=0;j<26;j++)
	if(y[j]==0){
		t3[v]=x[j]; printf("%d ",t3[v]);v++;}
for(i=0;i<f;i++)
for(j=0;j<26;j++)
	if(t2[i]==x[j])
for(k=0;k<f;k++)
	if(y[j]==t2[k])t4++;
printf("\nt4=%d",t4);
km = f /(double)n;
printf("\nKm=%f",km);
kn = t4 /(double)r;
printf("\nKn=%lf",kn);
printf("\nA matric\n");
for(j=0;j<26;j++)
	A[x[j]][y[j]]=1;
for(i=1;i<20;i++){
for(j=1;j<20;j++){
	printf("%d ",A[i][j]);}
printf("\n");}
printf("A^2 matric\n");
for(i=1; i < 20; i++){
 for(j=1; j < 20; j++){
 A2[i][j]=0;
 for(k=1;k<20;k++)
 A2[i][j]+=A[i][k]*A[k][j];
 printf("%d ",A2[i][j]);}
 printf("\n");}
printf("A^3 matric\n");
for(i=1; i < 20; i++){
 for(j=1; j < 20; j++){
 A3[i][j]=0;
 for(k=1;k<20;k++)
 A3[i][j]+=A2[i][k]*A[k][j];
 printf("%d ",A3[i][j]);}
 printf("\n");}
printf("A^4 matric\n");
for(i=1; i < 20; i++){
 for(j=1; j < 20; j++){
 A4[i][j]=0;
 for(k=1;k<20;k++)
 A4[i][j]+=A3[i][k]*A[k][j];
 printf("%d ",A4[i][j]);}
 printf("\n");}
printf("Delta matric\n");
for(i=1; i < 20; i++){
 for(j=1; j < 20; j++){
 D[i][j]=A[i][j]+A2[i][j]+A3[i][j]+A4[i][j];
 printf("%d ",D[i][j]);}
 printf("\n");}
b=0;
for(i=1; i < 20; i++)
	 if(D[i][i]!=0)b=D[i][i];
if(b!=0)
	printf("Delta matrici ankyunagci vra ka %d arjeq parunakox tar\n",b);
else printf("Delta matrici ankyunagci bolor tarer@ 0en\n");
return 0;
}