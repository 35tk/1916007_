#include <DxLib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdShow)
{
	// ���я���
	SetWindowText("1916007_������K");
	SetGraphMode(640, 400, 16);									// 640��480�ޯāA65536�FӰ�ނɐݒ�
	ChangeWindowMode(true);										// true:window false:�ٽ�ذ�
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

	DxLib_End();			//DXײ���؂̏I������
	return 0;				//��۸��т̏I��
}