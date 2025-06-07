int reverse(int x){
    if(!x ||x >2147483647 || x <=-2147483648) return 0;
    bool positive = true;
    if(x < 0){
        x= -x;
        positive = false;
    }
    long int result = 0;
    for(int i  = x ; i >0 ; i/=10){
        result = result*10 + i % 10;
        if(result >2147483647 || result <-2147483648) return 0;
    }
    return positive? result : -result;
}