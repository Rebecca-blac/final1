#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	//char s[]="hello world";
	//printf("%s\n",s);
 	char s1[50]={0,};
	char s2[50]={0,};
	int i,num;
	scanf("%s",s1);
	scanf("%s",s2);
	//char *p=strstr(s1,s2);
	while (strstr(s1,s2)){
		i=0;
		num=strlen(s1);
		char *p=strstr(s1,s2);    
		int cnt=strlen(p);       
		while (i!=strlen(s2)){    
			*p++='\0';            
			i++;
		}
		strcpy(s1+(num-cnt),p);  
	}
	num=strlen(s1);
//	printf("%s\n",p);
	for (i=0;i<=num;i++){
		printf("%c",s1[i]);
	}
	
	
	return 0;
}