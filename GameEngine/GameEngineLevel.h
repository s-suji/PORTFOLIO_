#pragma once
#include "GameEngineBase/GameEngineNameObject.h"

// 설명 :
class GameEngineLevel : public GameEngineNameObject
{
public:
	// constrcuter destructer
	GameEngineLevel();

	// 면접때 물어보면 알아야 합니다.
	// 이건 정말 중요하기 때문
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

