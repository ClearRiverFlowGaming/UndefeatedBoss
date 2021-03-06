//
//  MenuScene.hpp
//  UnDefeatedBoss
//
//  Created by Yang Hee.jae on 2016. 12. 2..
//
//

#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__

#include "cocos2d.h"

class MenuScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MenuScene);
    
    //menu functions
    void Play(Ref *pSender);
    void Settings(Ref *pSender);
    
};

#endif // __MENU_SCENE_H__
