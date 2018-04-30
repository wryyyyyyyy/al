#include "game.h"

int main(void)
{
    int sw = 800, sh = 600;

    allegro_init();
    install_timer();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, sw, sh, 0, 0);
    request_refresh_rate(60);
    clear_to_color(screen,makecol(240,230,140)); //khaki

    initGame();

    while(!end_game)
    {
        processInput();
        processRender();
    }

    return 0;
}
END_OF_MAIN()

void initGame()
{
    int w, h;

    get_desktop_resolution(&w,&h);
    printf("System info: %s\n",allegro_id);
    printf("Desktop res: %dx%d\n",w,h);
    printf("Current res: %dx%d\n",SCREEN_W,SCREEN_H);
}

void processInput()
{
    int k;
    k = readkey();
    if((k >> 8) == KEY_ESC) {
        printf("ESC pressed! Bye!\n");
        end_game = true;
    }
}

void processRender()
{

}
