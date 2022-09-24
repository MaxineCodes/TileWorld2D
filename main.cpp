#include "gameSettings.h"
#include "main.h"
#include "gameApp.h"

// Entrypoint of the program
int main()
{
    // Declare game framework "gameapp" as "app"
    gameapp app;

    // Application Loop
    while (app.isRunning())
    {
        // Update
        app.update();

        // Render
        app.render();
    }

    return 0;
}