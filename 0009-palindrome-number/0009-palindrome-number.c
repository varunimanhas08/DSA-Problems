bool isPalindrome(int x) {
    long long temp=x;
    long long r;
    long long sum=0;
    while(temp>0){
        r=temp%10;
        sum=sum*10+r;
        temp/=10;
    }
    if (sum==x){
        return true;
    }
    else{
        return false;
    }
}
