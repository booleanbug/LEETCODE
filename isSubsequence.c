int found(char c,int *index,char *t,int n){
    for(int i = *index; i < n ;i++){
        if(t[i] == c){
            *index = i+1;
            return 1;
        }
    }
    return 0;
}

bool isSubsequence(char * s, char * t){
    int index = 0;
    for(int i = 0; i < strlen(s) ;i++){
        if(!found(s[i],&index,t,strlen(t))){
            printf("\ndsfasd\n");
            return 0;
        }
    }
    return 1;
}
