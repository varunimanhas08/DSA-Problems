class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int temp =i;
            bool valid =true;
            bool changed = false;
            while(temp>0){
               int last = temp%10;
               if(last==3 || last==4 || last==7){
                valid=false;
                break;
               }
            if(last==2 || last==5|| last ==6 || last==9){
                changed = true;
            }
            temp/=10;
        }
        if(valid && changed){
            count++;
        }
    }
    return count;
}
};