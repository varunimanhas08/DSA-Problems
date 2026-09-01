class Solution {
public:
    char repeatedCharacter(string s) {
        int hash[100]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            if(hash[s[i]-'a']==2){
                return s[i];
                break;
        }
        }
       return -1;
    }
};