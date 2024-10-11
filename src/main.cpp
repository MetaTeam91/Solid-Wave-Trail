#include <Geode/Geode.hpp>
#include <Geode/modify/CCDrawNode.hpp>
#include <Geode/modify/HardStreak.hpp>

using namespace geode::prelude;
class $modify(SolidWaveTrailCCDNHook, cocos2d::CCDrawNode) {

    bool drawPolygon(cocos2d::CCPoint *p0, unsigned int p1, const cocos2d::ccColor4F &p2, float p3, const cocos2d::ccColor4F &p4) {
        if (p2.r == 1.F && p2.g == 1.F && p2.b == 1.F && p2.a != 1.F) return true; 
            
        this->setBlendFunc(CCSprite::create()->getBlendFunc());
        this->setZOrder(-1); 
        return CCDrawNode::drawPolygon(p0,p1,p2,p3,p4);
    }
};