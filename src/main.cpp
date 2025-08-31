// all textures from https://free-game-assets.itch.io/free-city-backgrounds-pixel-art !!1!!
#include "raylib.h"

int main(void)
{
    const int width = 500;
    const int height = 300;
    InitWindow(width, height, "greg");

    // all the textures
    Texture2D one = LoadTexture("assets/1.png");
    Texture2D two = LoadTexture("assets/2.png");
    Texture2D three = LoadTexture("assets/3.png");
    Texture2D four = LoadTexture("assets/4.png");
    Texture2D five = LoadTexture("assets/5.png");
    Texture2D six = LoadTexture("assets/6.png");
    Texture2D seven = LoadTexture("assets/7.png");

    // main loop
    while (!WindowShouldClose())
    {
        // draw
        BeginDrawing();
            ClearBackground(RAYWHITE);

            // layer to make look wWOW
            DrawTexture(one, 0, 0, WHITE);
            DrawTexture(two, 0, 0, WHITE);
            DrawTexture(three, 0, 0, WHITE);
            DrawTexture(four, 0, 0, WHITE);
            DrawTexture(five, 0, 0, WHITE);
            DrawTexture(six, 0, 0, WHITE);
            DrawTexture(seven, 0, 0, WHITE);

        EndDrawing(); // end draw
    }

    // unload textures
    UnloadTexture(one);
    UnloadTexture(two);
    UnloadTexture(three);
    UnloadTexture(four);
    UnloadTexture(five);
    UnloadTexture(six);
    UnloadTexture(seven);

    CloseWindow();
}
