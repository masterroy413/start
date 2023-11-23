#include<bits/stdc++.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;

int main()
{
   char f[20]={0};
   int fd=open("test.txt",O_RDWR,0777);
   cout<<"file depositor "<<fd;

   cout<<"Enter value ";
   cin>>f;
   write(fd,f,strlen(f)+1);
   close(fd);

   fd=open("test.txt",O_RDWR);
   read(fd,f,20);
   cout<<f;
   return 0;
  }
