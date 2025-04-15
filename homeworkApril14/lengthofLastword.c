int lengthOfLastWord(char* s) {
   int length=0;
   int n=strlen(s);
   int i=n-1;
   while(i>=0 && s[i]==' '){
    i--;
   }while(i>=0 && s[i]!=' '){
    length++;
    i--;
   }return length;
}
