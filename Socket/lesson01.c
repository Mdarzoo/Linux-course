#include<stdio.h>
#include<unistd.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<string.h>

# define port 8080


int main(int argc, char *argv[])
{
	int serv_fd,n_socket,v_read;
	struct socket_addrin address; 
	
	int opt=1;
	int addr_length=sizeof(address);
	char buffer[1024]={0};
	char *hey = " Hey I am server ! ";
	
	if((serv_fd=socket(AF_INET,SOCK_STREAM,0))==0)
	{
		perror("socket failure  ! ");
		exit(0);
	}
	
	if(setsocket(server_fd,SOL_SOCKET,SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt)))
	{
		perror("setsockopt error ! ");
		exit(0);
		
	}
	
	address.sin_family=AF_INET;
	address.sin_addr.s_addr=INADDR_ANY;
	address.sin_port=htons(PORT);
	
	if(bind(server_fd,(struct sockeraddr* )&address, sizeof(address))< 0)
	{
		perror("bind failure ");
		exit(0);
	}
	
	if(listen(serv_fd,3)< 0 )
   {
   	
   	perror("listen error ");
   	exit(0);
	   }	
  if((n_socket=accept(serv_fd(struct sockaddr*)&address,(socklen_t*)&addrlen))<0);
  {
  	perror("Accept error ! ");
  	exit(0);
  }
 
  v_read=read(n_socket,buffer,1024);
  printf("%s \n ",buffer);
  send(n_socker,hey,strlen(hey),0);
  printf("Hey Msg is sent ! \n ");
  	
	
	
	
}
