int binarySearch(int arr[], int l, int r, int x)
{
  int m=(r+l)/2;
  
  if(l>r)
    return -1;
  
  if(arr[m]==x)
  {
      return m;
  }
  else if(arr[m]>x)
  {
      return binarySearch(arr[], l, m-1, x);
  }
  else
  {
      return binarySearch(arr[], m+1, r, x);
  }

  return 0;
}
