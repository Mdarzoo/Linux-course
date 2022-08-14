#include<stdio.h>
#include<sys/imsg.h>
#include<sys/ipc.h>

struct msg_buffer{
	
	long msg_type;
	char msg_txt[500];
}messag;

int main()
{
	key_t key;
	int msg_id; 
	
	key=fork("profile",65);
	
	msg_id=msgget(key,066 | IPC_CREATE);
	messge.msg_type=1;
	
	printf("please write data to send : ");
	gets(message.msg_txt);
	
	msgsnd(msg_id,&message,sizeof(message),0 )
	
	printf("we have sen  : %s \n ");
	
}
