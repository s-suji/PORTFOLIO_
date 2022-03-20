#include "NyangWar.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"

NyangWar::NyangWar() 
{
}

NyangWar::~NyangWar() 
{
}

void NyangWar::GameInit() 
{
	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
}

void NyangWar::GameLoop() 
{

}
void NyangWar::GameEnd() 
{

}