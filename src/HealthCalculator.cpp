
#include "HealthCalculator.h"


float HealthCalculator::remnant(PlayerDate player, int damage) {
  player.health -= damage;  // 現在ＨＰからダメージ分減らす
  float restHealth = player.health / player.maxHealth;  // 現在ＨＰが最大ＨＰの何％になったか
  float newBarScale = player.maxBarScale * restHealth;  // 元のバーの長さから同じ％分だけ長さを短くする
  return newBarScale;
}

float HealthCalculator::percentage() {}
