#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/NyangWar.h>

NyangWar MyGame;

void GameInit() 
{
    // 텍스처를 로딩하고 준비를 하고
    // 오브젝트를 미리 만들어 놓고

    // 미리 만들어 놓을게 도대체 뭐냐?
    // 

    MyGame.GameInit();

}

void GameLoop() 
{
    // 게임이 실행된다.

    MyGame.GameLoop();
}

int __stdcall WinMain(_In_ HINSTANCE hInstance,   // 윈도우가 우리프로그램을 구분하기 위한 번호인 핸들 부여. 
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