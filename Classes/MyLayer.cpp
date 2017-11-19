#include "MyLayer.h"


//MyLayer *MyLayer::create()
//{
//	MyLayer *pRet = new MyLayer();
//	if (pRet && pRet->init())
//	{
//		pRet->autorelease();
//	}
//	else
//	{
//		delete pRet;
//		pRet = NULL;
//	}
//	return pRet;
//
//}


bool MyLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}

	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	CCSprite *spr = CCSprite::create("CloseSelected.png");
	spr->setPosition(ccp(winSize.width / 2, winSize.height / 2));
	addChild(spr);

	return true;
}

CCScene *MyLayer::scene()
{
	CCScene *scene = CCScene::create();
	MyLayer * layer = MyLayer::create();
	scene->addChild(layer);
	return scene;
}