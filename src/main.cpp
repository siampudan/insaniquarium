#include <iostream>
#include "./Piranha/piranha.h"
#include "../libs/graphic/app.h"
#include "./Animal/animal.h"


int main(){
    App app;
    app.initWindow();
    
    app.prepareScene("../assets/aquarium1.jpg");

    
    Piranha* piranha = new Piranha();

    while(true){
        app.doInput();        
        app.blit(piranha);
        app.presentScene();
        SDL_Delay(16);
    }


    return 0;
}