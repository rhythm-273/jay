#define ll long long int

ll power(ll x,ll y, ll p) 
{ 
    ll res = 1; 
    x = x % p;
    while (y > 0) 
    {  // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p;
                    
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 
