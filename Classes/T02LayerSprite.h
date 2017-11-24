#ifndef __T02LAYERSPRITE_H__
#define __T02LAYERSPRITE_H__
#include "cocos2d.h"
USING_NS_CC;
class T02LayerSprite : public CCLayer
{
public:
	static CCScene * scene();
	static CCLayer * create();
	bool init();
};

#endif

