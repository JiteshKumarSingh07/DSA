class solution    
    {
    public:
        int *findTwoElement(int *arr, int n) {
            int* arr1[2];
            
            sort(arr,arr+n);
            static int b;
            for(int i=0; i<n; i++)
            {
                if(arr[i]==arr[i+1])
                {
                    b = arr[i];
                    break;
                }
            }
            int c = arr[n-1]+1,k=0;
            static int a;
            if(arr[0]!=1)
                a = 1;
            else
            {
                for(int i=0; i<n; i++)
                {
                    if(arr[i+1]-arr[i]>1 )
                    { a = arr[i]+1;
                        k+=1;
                        break;
                        }
                }
                if(k==0)
                    a = c;}
            
            arr1[0] = &b;
            arr1[1] = &a;
            return *arr1;
        }
    };