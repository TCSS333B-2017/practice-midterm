
char* my_strncat(char *a, char *b,int n){
 int i=0,j=0;
	while(a[i]){
		i++;
	}
	int nCopied=0;	
	while (b[j] && nCopied ++ <n){
	 a[i++]=b[j++];
	}
	a[i]='\0';
 return (a);		
}
