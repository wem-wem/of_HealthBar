
#pragma once
#include "ofMain.h"
#include "ofxGui.h"
#include "ofxXmlSettings.h"
#include "player.h"

class HealthBar {
private:
  enum PlayerNumber {
    PlayerOne = 0,
    PlayerTwo = 1,
  };
  Player* player_;
  float currentScale; // 現在ＨＰバーの長さ
  float tempHealth; // ダメージを受ける前のＨＰを入れておく箱
  float damageScale;

  ofxPanel gui_;
  ofParameter<ofVec2f> barScale_;
  ofxButton save_;
  ofxButton load_;

  void drawLeft();
  void drawRight();
  void guiSetup();
  void saveFile();
  void loadFile();
  float remnant();
  void setDamageScale();
  void updateLeft();
  void updateRight();
public:
  void setup(Player *player);
  void update(ofEventArgs &args);
  void draw();
};
