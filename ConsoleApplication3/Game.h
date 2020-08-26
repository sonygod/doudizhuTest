#pragma once
#include "Player.h"


enum Status {
	NOTSTART,//��Ϸδ��ʼ
	GETLANDLORD,//�е����׶�
	SENDLANDLORDCARD,//�������ƽ׶�
	DISCARD,//���ƽ׶�
	GAMEOVER//��Ϸ����
};


class Game
{
	friend class Player;
public:
	Game();
	~Game();

private:
	Player *player[3];	 //������ұ��Ϊ0
	Player *landlord;	 //����
	Player *curplayer;	 //��ǰ�������
	Player *lastone;	 //�����Ʒ�
	int callscore[3];	 //���ҽе����ķ���
	int callbegin;		 //��һ���е��������
	int basescore;		 //���ֻ�����
	int times;			 //���ֱ���
	int questioned;		 //��ѯ������
	int landlordcard[3]; //���ֵ�����ר���ƴ洢��
};

