int reverse(int x){
    int temp=x;
    int r;
    int s=0;
    while(temp!=0){
        r=temp%10;
        if (s> INT_MAX / 10 || s< INT_MIN / 10) {
            return 0;
        }
        s=s*10+r;
        temp/=10;
    }
    return s;
}
