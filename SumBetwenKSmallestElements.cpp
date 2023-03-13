int f(vector<int> arr,int k1,int k2){
int f1=kthsmallest(arr,k1);
int f2=kthsmallest(arr,k2);
//KTH SMALLEST AS WRITTEN EARLIER 
int sum=0;
for(int i=0;i<n;i++){
if(a[i]>f1 && a[i]<f2){
sum=sum+a[i];
}
}
return sum;
}
