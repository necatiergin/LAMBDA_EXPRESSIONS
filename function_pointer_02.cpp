struct lambda_14723 {
    // çağrı operatörü
    int operator()(int x) const {
        return x * x;
    }

    // işte burası: static fonksiyon, bir örnek nesne üzerinden operator() çağırıyor
    static int invoke(int x) {
        // boş bir örnek (çünkü capture yok)
        lambda_14723 temp;
        return temp(x);  // operator()(x) çağrılıyor
    }

    using fptr = int (*)(int);

    operator fptr() const 
    {
        return &lambda_14723::invoke;
    }
};
