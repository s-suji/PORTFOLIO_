#pragma once
#include <GameEngine/GameEngine.h>

// 
class NyangWar : public GameEngine
{
public:
	// constrcuter destructer
	NyangWar();
	~NyangWar();

	// delete Function
	NyangWar(const NyangWar& _Other) = delete;
	NyangWar(NyangWar&& _Other) noexcept = delete;
	NyangWar& operator=(const NyangWar& _Other) = delete;
	NyangWar& operator=(NyangWar&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

