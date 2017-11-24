#ifndef __T04COLORLAYER_H__
#define __T04COLORLAYER_H__
#include "cocos2d.h"
USING_NS_CC;

class T04ColorLayer : public CCLayerColor
{
public:
	static CCScene * scene();
	static CCLayer * create();
	bool init();
};

#endif