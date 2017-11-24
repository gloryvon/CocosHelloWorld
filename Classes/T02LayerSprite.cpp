#include "T02LayerSprite.h"

CCScene * T02LayerSprite::scene()
{
	CCScene * pRet = CCScene::create();
	CCLayer *layer = T02LayerSprite::create();
	pRet->addChild(layer);
	return pRet;
}

CCLayer * T02LayerSprite::create()
{
	T02LayerSprite * layer = new T02LayerSprite();
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

bool T02LayerSprite::init()
{
	CCLayer::init();

	//通过CCSprite::create()创建精灵
	CCSprite *bg = CCSprite::create("sprite/background.jpg", CCRectMake(0, 0, 480, 320));
	bg->setAnchorPoint(ccp(0, 0));
	bg->setPosition(CCPointZero);
	addChild(bg);

	//通过CCSprite::createWithTexture()创建精灵
	CCImage *image = new CCImage();
	image->initWithImageFile("sprite/plant.png");

	CCTexture2D * textture = new CCTexture2D();
	textture->autorelease();
	textture->initWithImage(image);
	CCSprite *plant = CCSprite::createWithTexture(textture);

	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	plant->setPosition(ccp(100, winSize.height / 2));
	addChild(plant);

	CCTexture2D *textture2 = CCTextureCache::sharedTextureCache()->addImage("sprite/bullet.png");
	CCSprite *bullet = CCSprite::createWithTexture(textture2);
	bullet->setPosition(ccp(100, winSize.height / 2 + 10));
	addChild(bullet);

	CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("sprite/zombie.plist");
	//CCSpriteFrame *sf = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName("z_1_attack_01.png");
	//CCSprite * zombie = CCSprite::createWithSpriteFrame(sf);
	CCSprite * zombie = CCSprite::createWithSpriteFrameName("z_1_attack_01.png");
	zombie->setPosition(ccp(400, winSize.height / 2));
	addChild(zombie);

	CCJumpBy *by = CCJumpBy::create(2, ccp(0, 0), 30, 2);
	zombie->runAction(CCRepeatForever::create(by));
	
	CCSpriteFrame * frame = CCSpriteFrame::create("sprite/p_1_01.png", CCRectMake(0, 0, 80, 80));
	CCSprite * sun = CCSprite::createWithSpriteFrame(frame);
	sun->setPosition(ccp(400, winSize.height / 2 + 50));
	addChild(sun);

	return true;
}
