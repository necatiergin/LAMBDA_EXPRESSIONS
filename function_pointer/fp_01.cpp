struct lambda_14723 {
    
    int operator()(int x) const {
        return x * x;
    }

   
    static int invoke(int x) {
        
        lambda_14723 temp;
        return temp(x);  // operator()(x) çağrılıyor
    }

    using fptr = int (*)(int);

    operator fptr() const 
    {
        return &lambda_14723::invoke;
    }
};
