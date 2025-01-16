const int N = 1e6;
int tmp[N];
void merge_sort(int q[],int l,int r){
  if(l>=r)return;
  int mid = l+r>>1;
  merge_sort(q,l,mid);
  merge_sort(q,mid+1,r);
  int i = l;
  int j = mid + 1;
  int k =0;
  while(i<=mid&&j<=r){
    if(q[i]<q[mid])tmp[k++]=q[i++];
    else tmp[k++]=q[j++];
  }
  while(i<=mid) tmp[k++]=q[i++];
  while(j<=r)tmp[k++]=q[j++];
  for(i=l,j=0;i<=r;i++,j++) q[i]=tmp[j];
}
