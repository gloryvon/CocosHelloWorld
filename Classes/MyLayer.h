#include "cocos2d.h"
USING_NS_CC;

class MyLayer : public CCLayer
{
public:
	CREATE_FUNC(MyLayer);
	//static MyLayer *create();

	static CCScene *scene();
	bool init();
};

