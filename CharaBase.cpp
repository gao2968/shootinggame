#include "CharaBase.h"
#include "DxLib.h"

void CharaBase::Update(GameMainScene* gamemain)
{
	//gamemain��hitchaek���Ăяo��true��������hit���Ăяo���������L��
}

void CharaBase::Draw() const
{
	//�摜�`���CharaBase�ōs���i���j
	DrawGraph(location.x, location.y, image, TRUE);
}

int CharaBase::Hit(int damage)
{
	//����������̏���
	//player��enemy�̋��ʏ������e���L�q�A��@���������e�������i�v�ǋL�j
	return 0;
}