#include "T04ColorLayer.h"


CCScene * T04ColorLayer::scene()
{
	CCScene * pRet = CCScene::create();
	CCLayer *layer = T04ColorLayer::create();
	pRet->addChild(layer);
	return pRet;
}

CCLayer * T04ColorLayer::create()
{
	T04ColorLayer * layer = new T04ColorLayer();
	if (layer && layer->init())
	{
		layer->autorelease();
	}
	else
	{
		delete layer;
		layer = NULL;
	}
	return layer;
}

bool T04ColorLayer::init()
{
	CCLayer::init();

	CCSprite *man = CCSprite::create("zorder/man.png");
	man->setScale(0.3f);
	CCSprite *woman = CCSprite::create("zorder/woman.png");
	woman->setScale(0.3f);
	CCSprite *smallThree = CCSprite::create("zorder/another.png");
	smallThree->setScale(0.3f);

	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	man->setPosition(ccp(winSize.width / 2, winSize.height / 2 - 100));
	smallThree->setPosition(ccp(winSize.width / 2, winSize.height / 2));
	woman->setPosition(ccp(winSize.width / 2, winSize.height / 2 + 100));

	man->setZOrder(3);
	smallThree->setZOrder(4);
	woman->setZOrder(5);

	addChild(man);
	addChild(smallThree);
	addChild(woman);
	return true;
}
