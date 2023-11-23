#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main()
{
	while(1)
	{
	int fs;
	char buf[50]={0},buf2[50]={0};
	fs=open("for1",O_RDWRONLY);
	read(fs,buf,20);
	cout<<buf<<endl;
	close(fs);

	fs=open("for1",O_WRONLY);
	string str2;
	getline(cin>>ws,str2);
	write(fs,str2.c_str(),str2.length());
	close(fs);
        }
 return 0;
}

