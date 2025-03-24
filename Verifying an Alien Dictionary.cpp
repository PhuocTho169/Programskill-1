//Verifying an Alien Dictionary
#include<iostream>
#include<vector>
#include<string>
string solve(vector<string>&word,string order){
    int n=word.size();
    int pos[26];
    for(int i=0;i<n;i++){
    pos[order-'a']=i;
    }
    for(int i=0;i<n-1;i++){
        string word1=word[i];
        string word2=word[i+1];
        int minl=min(word1.size(),word2.size());
        bool valid=0;
    }
    for(int j=0;j<minl;j++){
        char c1=word1[j]
        char c2=word2[j];
        if(c1!=c2){
            if(pos[c1-'a'] > pos[c2-'a']){
                return 0;
            }
            return 1;
            valid=1;
            break;
        }
    }
    if(!valid && word1.size()>word2.size()){
        return 0;
    }
    return 1;
}
