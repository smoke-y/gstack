s32 main(){
    gstack::init("gstack.log");
    InitWindow(400, 200, "raygui - controls test suite");
    SetTargetFPS(60);

    bool showMessageBox = false;

    while (!WindowShouldClose())
    {
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
            Rectangle re = {24, 24, 130, 30};
            if (GuiButton(re, "#191#Show Message")) showMessageBox = true;


        EndDrawing();
    }

    CloseWindow();
    gstack::uninit();
}