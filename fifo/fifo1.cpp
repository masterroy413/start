#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main()
{
	int fd;
	fd=open("for1",O_WRONLY);
	write(fd,"Hello sasken ",12);
	cout<<"process one is final done ";
	close(fd);
 return 0;

 }
