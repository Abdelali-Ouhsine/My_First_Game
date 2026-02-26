#include <raylib.h>

int main()
{
	int ballx = 400;
	int bally = 400;
	Color green = {20, 160, 133, 225}; 
	InitWindow(800,800,"My First Game");
	SetTargetFPS(60);
	//Game Loop
	while(WindowShouldClose() == false)
	{
		//1.event handling
		if(IsKeyDown(KEY_RIGHT))
		{
			ballx += 3;
		} else if (IsKeyDown(KEY_LEFT))
		{
			ballx -= 3;
		}
		if(IsKeyDown(KEY_UP))
		{
			bally -= 3;
		}else if(IsKeyDown(KEY_DOWN))
		{
			bally += 3;
		}

		//2.Updating Positions
		//3.Drawing
		BeginDrawing();
		ClearBackground(green);
		DrawCircle(ballx, bally, 20, WHITE);
		
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
