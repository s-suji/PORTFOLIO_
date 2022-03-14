#pragma once
class EnemyTower
{
public:
	// constrcuter destructer
	EnemyTower();
	~EnemyTower();

	// delete Function
	EnemyTower(const EnemyTower& _Other) = delete;
	EnemyTower(EnemyTower&& _Other) noexcept = delete;
	EnemyTower& operator=(const EnemyTower& _Other) = delete;
	EnemyTower& operator=(EnemyTower&& _Other) noexcept = delete;

protected:

private:
};

