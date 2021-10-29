#include <iostream>
#include "app.h"

int main(){
     
    App app;
    
    app.initWindow();

    std::string fileName= "../../assets/aquarium1.jpg";
    char * background = new char(fileName.length() + 1);
    strcpy(background, "../../assets/aquarium1.jpg");
    app.prepareScene(background);
    while(true){
        app.doInput();
        app.presentScene();
        SDL_Delay(16);
    }
    return 0;
}