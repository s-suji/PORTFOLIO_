#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/NyangWar.h>

NyangWar MyGame;

void GameInit() 
{
    // �ؽ�ó�� �ε��ϰ� �غ� �ϰ�
    // ������Ʈ�� �̸� ����� ����

    // �̸� ����� ������ ����ü ����?
    // 

    MyGame.GameInit();

}

void GameLoop() 
{
    // ������ ����ȴ�.

    MyGame.GameLoop();
}

int __stdcall WinMain(_In_ HINSTANCE hInstance,   // �����찡 �츮���α׷��� �����ϱ� ���� ��ȣ�� �ڵ� �ο�. 
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ char*    lpCmdLine,
    _In_ int       nCmdShow)
{
    GameEngineDebug::LeakCheckOn();

    GameEngineWindow::GetInst().CreateGameWindow(hInstance, "GameWindow");
    GameEngineWindow::GetInst().ShowGameWindow();
    GameEngineWindow::GetInst().MessageLoop(GameInit, GameLoop);
    GameEngineWindow::Destroy();

    MyGame.GameEnd();
}