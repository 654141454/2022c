char * mergeAlternately(char * word1, char * word2){
    char * ans=(char*) malloc(201);
    int N1=strlen(word1);
    int N2=strlen(word2);

    int N=0;
    for(int i=0;i<200;i++){
            if(i<N1) ans[N++]=word1[i];
             if(i<N2) ans[N++]=word2[i];
    }
    ans[N] =0;
    return ans;
}
