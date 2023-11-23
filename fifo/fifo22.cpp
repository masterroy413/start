#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	while(1)
	{
	int fd;
	char buf[50]={0};
	fd=open("for1",O_WRONLY);
	string str;
	getline(cin>>ws,str);
	write(fd,str.c_str(),str.length());
	close(fd);

	fd=open("for1",O_RDONLY);
	read(fd,buf,20);
	cout<<"read succefully "<<buf<<endl;
	//printf("%s",buf);
	close(fd);
	}
	return 0;
}

