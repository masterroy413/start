#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std ;

int main()
{
	int i;
	char buf[20]={0};
	i=open("for1",O_RDONLY);
	read(i,buf,15);
	cout<<buf;
	close(i);

	return 0;
}

