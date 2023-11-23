#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main()
{
	char w[20]={0},wr[20]={0};
	int f1=open("test.txt",O_RDWR|O_CREAT,0777);
	printf("File descriptor :%d\n",f1);

	printf("enter the value\n ");
	scanf("%s",wr);
	write(f1,wr,strlen(wr)+1);
	close(f1);

	f1=open("test.txt",O_RDWR);
	read(f1,w,20);
	printf("%s\n",w);
	return 0;

}
