char* Rev_string(char* token)
{
	int length=strlen(token);
//printf("%s\n",name );
    int i,j;
    char temp;
for(i=0,j=length-1;i<j;i++,j--)
{
	temp=token[i];
	token[i]=token[j];
	token[j]=temp;
}
return token;
}