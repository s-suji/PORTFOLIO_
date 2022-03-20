#pragma once

// Ό³Έν :
class Nyangco
{
public:
	// constrcuter destructer
	Nyangco();
	~Nyangco();

	// delete Function
	Nyangco(const Nyangco& _Other) = delete;
	Nyangco(Nyangco&& _Other) noexcept = delete;
	Nyangco& operator=(const Nyangco& _Other) = delete;
	Nyangco& operator=(Nyangco&& _Other) noexcept = delete;

protected:

private:

};

