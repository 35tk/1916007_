#include <DxLib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdShow)
{
	// ｼｽﾃﾑ処理
	SetWindowText("1916007_大﨑琢規");
	SetGraphMode(640, 400, 16);									// 640＊480ﾄﾞｯﾄ、65536色ﾓｰﾄﾞに設定
	ChangeWindowMode(true);										// true:window false:ﾌﾙｽｸﾘｰﾝ
	if (DxLib_Init() == -1)
	{
		return -1;
	}
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClsDrawScreen();
		ScreenFlip();
	}

	DxLib_End();			//DXﾗｲﾌﾞﾗﾘの終了処理
	return 0;				//ﾌﾟﾛｸﾞﾗﾑの終了
}