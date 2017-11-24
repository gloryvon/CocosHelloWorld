#ifndef __T03LAYERZORDER_H__
#define __T03LAYERZORDER_H__
#include "cocos2d.h"
USING_NS_CC;

class T03LayerZorder : public CCLayer
{
public:
	static CCScene * scene();
	static CCLayer * create();
	bool init();
};

#endif


