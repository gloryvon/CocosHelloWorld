#ifndef __T01LAYERANCHORPOINT_H__
#define __T01LAYERANCHORPOINT_H__

#include "cocos2d.h"
USING_NS_CC;
class T01LayerAnchorPoint : public CCLayer
{
public:
	static CCScene * scene();
	static CCLayer * create();
	bool init();
	void draw();
	void myschedule(float a);

	CCSprite *spr;
};

#endif