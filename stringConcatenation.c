#include <stdio.h>
#include<string.h>

int main() {
	//concatenate two string
	char str1[] = "code";
	char str2[] = "Chef";

	int n=strlen(str1);
	int i=0;
	while(str2[i] != '\0'){
		str1[n] = str2[i];
		n++;
		i++;
	}

	for(i=0; i<n; i++){
		printf("%c", str1[i]);
	}
	return 0;
}