 int product,r,reverse,result=0,a,b;
    for(int i=100;i<=999;i++)
    {
        for(int j=100;j<=999;j++)
        {
            product=i*j;
           
             int n=product;
             reverse=0;
            while(n!=0)
            {
                r=n%10;
                reverse=reverse*10+r;
                n=n/10;
            
            }
            if(product==reverse)
            {
                if(product>result){
            result=product;
   }
           
            }
        }
    }
    
    cout<<result<<endl;
