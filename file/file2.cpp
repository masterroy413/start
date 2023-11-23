#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main()
{

	char s1[10];
	int f1=open("test2.txt",O_RDWR|O_CREAT,0777);
	cout<<"this is file discripter "<<f1;

        cout<<"enter the data "<<endl;
	cin>>s1;
	write(f1,s1,strlen(s1)+1);
	close(f1);

        f1=open("test2.txt",O_RDWR);
	read(f1,s1,10);
	cout<<s1;
	close(f1);
	return 0;
}	
		
