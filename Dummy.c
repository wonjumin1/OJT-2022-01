#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j; // nResult; 
	int count=1;
	char filename[100]; // strPath[] = ("Result/Dummy_file_"), add;
	FILE *fp;
	
	/*
	for(i=0; i; i++)
	{
		add = (char)i;
		strcat(strPath, add);
		nResult = remove(strPath);
		printf("%d",nResult);
		if( nResult == 0 )
		{
			printf( "초기화 중..." );
		}
		else if( nResult == -1 )
		{
			printf( "초기화 완료" );
			break;
		}
	}
	*/
	
	printf("Dummy File Create Count : ");
	scanf("%d",&j);

	while(count < j + 1) 
	{
		sprintf(filename, "Result/Dummy_file_%d", count);
		fp = fopen(filename, "w");
		for(i=0; i<1024; i++)
		{
			fseek(fp,(1023),SEEK_CUR);
			fprintf(fp,"C");
		}
		printf("Dummy_file_%d \n", count);
		count++;
		fclose(fp);
	}
	return 0;
}

	
	
