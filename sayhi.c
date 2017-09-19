#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
	if (argc==1){
		if (strcmp(argv[0],"./sayhi")==0)
			printf("hi\n"); else
		if (strcmp(argv[0],"./saysalem")==0)
			printf("salem\n");
else
		printf("good bye\n");
	}
	
	
}
