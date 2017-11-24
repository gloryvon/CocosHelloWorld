#include "T01LayerAnchorPoint.h"

CCScene * T01LayerAnchorPoint::scene()
{
	CCScene *pRet = CCScene::create();
	CCLayer * layer = T01LayerAnchorPoint::create();
	CCLog("x = %f, y = %f", layer->getPositionX(), layer->getPositionY());
	pRet->addChild(layer);
	return pRet;
}
CCLayer * T01LayerAnchorPoint::create()
{
	T01LayerAnchorPoint *pRet = new T01LayerAnchorPoint();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
	}
	else
	{
		delete pRet;
		pRet = NULL;
	}
	return pRet;
}
bool T01LayerAnchorPoint::init()
{
	CCLayer::init();

	CCSize winSize = CCDirector::sharedDirector()->getWinSize();

	spr = CCSprite::create("CloseSelected.png");
	/*spr->setAnchorPoint(ccp(0, 0));*/
	/*spr->ignoreAnchorPointForPosition(true);*/
	spr->setPosition(ccp(winSize.width / 2, winSize.height / 2));
	addChild(spr);

	schedule(schedule_selector(T01LayerAnchorPoint::myschedule), 2);
	return true;
}

void T01LayerAnchorPoint::draw()
{
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	ccDrawColor4B(0, 0, 255, 255);
	ccDrawLine(ccp(0, winSize.height / 2), ccp(winSize.width, winSize.height / 2));
}

void T01LayerAnchorPoint::myschedule(float a)
{
	static float ro = 0;
	ro += 30;
	spr->setRotation(ro);
}
