class solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int a[n+m], b=m+n;
            for(int i=0; i<n; i++)
                {
                    a[i] = arr1[i];
                }
            for(int i=n,j=0; i<b; i++,j++)
                {
                    a[i] = arr2[j];
                }
            sort(a,a+b);

            for(int i=0; i<n; i++)
                arr1[i] = a[i];
            for(int i=n,j=0; i<b; i++,j++)
                arr2[j] = a[i];
            
        } 
}