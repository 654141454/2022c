char * frequencySort(char * s){
    int N=strlen(s);
    int H[62]={};
    char alphabet[62];
    for(int i=0;i<26;i++)alphabet[i]='A'+i;
    for(int i=0;i<26;i++)alphabet[i+26]='a'+i;
    for(int i=0;i<10;i++)alphabet[i+26+26]='0'+i;
for(int i=0;i<N;i++){
    char c=s[i];
    if(c>='A' && c<='Z') H[c-'A']++;
    if(c>='a' && c<='z') H[c-'a'+26]++;
    if(c>='0' && c<='9') H[c-'0'+52]++;
}
for(int i=0;i<62;i++){
    for(int j=i+1;j<62;j++){
        if(H[i]<H[j]){
            int temp=H[i];
            H[i]=H[j];
            H[j]=temp;
            char c= alphabet[i];
            alphabet[i]=alphabet[j];
            alphabet[j]=c;
        }
    }
}
int len=0;
for(int  i=0;i<62;i++){
    for(int k=0;k<H[i];k++)s[len++]=alphabet[i];
    }
    return s;

}
