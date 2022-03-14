#pragma once
class NyangTower
{
public:
	// constrcuter destructer
	NyangTower();
	~NyangTower();

	// delete Function
	NyangTower(const NyangTower& _Other) = delete;
	NyangTower(NyangTower&& _Other) noexcept = delete;
	NyangTower& operator=(const NyangTower& _Other) = delete;
	NyangTower& operator=(NyangTower&& _Other) noexcept = delete;

protected:

private:
};

