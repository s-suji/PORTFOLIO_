#pragma once
#include "GameEngineBase/GameEngineNameObject.h"

// ���� :
class GameEngineLevel : public GameEngineNameObject
{
public:
	// constrcuter destructer
	GameEngineLevel();

	// ������ ����� �˾ƾ� �մϴ�.
	// �̰� ���� �߿��ϱ� ����
	virtual ~GameEngineLevel();

	// delete Function
	GameEngineLevel(const GameEngineLevel& _Other) = delete;
	GameEngineLevel(GameEngineLevel&& _Other) noexcept = delete;
	GameEngineLevel& operator=(const GameEngineLevel& _Other) = delete;
	GameEngineLevel& operator=(GameEngineLevel&& _Other) noexcept = delete;

protected:
	virtual void Loading() = 0;

private:
	template<typename ActorType>
	ActorType* CreateActor(const std::string& _Name) 
	{
		return nullptr;
	}
};
