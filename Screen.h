//
// Created by James francis on 07/06/2023.
//

#ifndef PROJECT_SCREEN_H
#define PROJECT_SCREEN_H

#include "SDL.h"

namespace caveofprog {

    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
    private:
        SDL_Window* m_window;
        SDL_Renderer* m_renderer;
        SDL_Texture* m_texture;
        Uint32* m_buffer;

    public:
        Screen();
        bool init();
        bool processEvents();
        void close();
        void update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    };

} // caveofprog

#endif //PROJECT_SCREEN_H
