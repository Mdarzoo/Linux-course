#include<sys/msg.h>
#include<sys/ipc.h>

struct msg_buffer
{
	long msg_type;
	char msg_txt[500];
}message;

int main()
{
	key_t key;
	int msg_id;
	
	key = ftok("progfile",65);
	msg_id = msgget(key,0666 | IPC_CREATE);
	
	msgrev(msg_id,&message,sizeof(message),1,0);
	
	printf("The msg or data that we have recevied is : %s ", message.msg_txt);
	
	msgctl(msgid, IPC_RMID,NULL);
	
}
