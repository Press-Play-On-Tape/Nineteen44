#include "src/Utils/Arduboy2Ext.h"


/* -----------------------------------------------------------------------------------------------------------------------------
 *  End of mission / game loop ..
 * -----------------------------------------------------------------------------------------------------------------------------
 */
#ifdef USE_LEVELS
void endOfSequence_Render(bool endOfLevel) {
#else
void endOfSequence_Render() {
#endif

  arduboy.drawHorizontalDottedLine(4, 69, 3);
  arduboy.drawHorizontalDottedLine(4, 69, 32);

  if (gameState == GameState::End_Of_Mission) {

    Sprites::drawOverwrite(5, 8, mission_successful, 0);

  }
  else {

    #ifdef USE_LEVELS
      if (endOfLevel) {
        Sprites::drawOverwrite(6, 8, level_complete, 0);
      }
      else {
        Sprites::drawOverwrite(6, 8, game_over, 0);
      }
    #else
      Sprites::drawOverwrite(6, 8, game_over, 0);
    #endif

  }

  Sprites::drawOverwrite(0, 48, splash_lower, 0);
  
}

void drawFlyingPair() {

  Sprites::drawExternalMask(intro - 80, 10, FlyBy_P38, FlyBy_P38_Mask, 0, 0);
  Sprites::drawExternalMask(intro - 38, 06, FlyBy_Zero, FlyBy_Zero_Mask, 0, 0);
  Sprites::drawExternalMask(intro - 20, 14, FlyBy_Zero, FlyBy_Zero_Mask, 0, 0);
  intro++;

}

#ifdef USE_LEVELS
void endOfSequence(const uint8_t level) {
#else
void endOfSequence() {
#endif

  #ifdef USE_LEVELS

    bool endOfLevel = false;

    if (level == 0 && mission == 30) { gameState = GameState::End_Of_Game; endOfLevel = true; } 
    if (level == 1 && mission == 60) { gameState = GameState::End_Of_Game; endOfLevel = true; }

  #endif

  #ifndef HIGH_SCORES
    #ifdef USE_LEVELS
      uint16_t high = eeprom_read_word((uint16_t *)(EEPROM_SCORE + (level * 2)));
    #else
      uint16_t high = eeprom_read_word((uint16_t *)EEPROM_SCORE));
    #endif
  #else
    uint16_t high = EEPROM_Utils::getHighScore();
  #endif

  if (player.getScore() > high) { 
    #ifndef HIGH_SCORES
      #ifdef USE_LEVELS
        eeprom_update_word((uint16_t *)(EEPROM_SCORE + (level * 2)), player.getScore());
      #else
        eeprom_update_word((uint16_t *)EEPROM_SCORE), player.getScore());
      #endif
    #endif
    high = player.getScore();
  }

  #ifdef USE_LEVELS
    endOfSequence_Render(endOfLevel); 
  #else
    endOfSequence_Render(); 
  #endif

  if (gameState != GameState::End_Of_Game) {
    Sprites::drawOverwrite(84, 5, usaf, 0);
  }

  // Score ..
  {
    uint8_t y = (gameState == GameState::End_Of_Game ? 3 : 28);
    Sprites::drawOverwrite(90, y, score_img, 0);

    uint8_t digits[4] = {};
    extractDigits(digits, player.getScore());

    for (uint8_t i = 0, x = 108; i < 4; ++i, x -= 6) {
      Sprites::drawSelfMasked(x, y + 10, font4x6_Full, digits[i] + 26);
    }

  }

  // Total ..
  if (gameState == GameState::End_Of_Game) {

    uint8_t digits[4] = {};
    Sprites::drawOverwrite(82, 27, highScore_img, 0);
    extractDigits(digits, high);
    
    for (uint8_t i = 0, x = 108; i < 4; ++i, x -= 6) {
      Sprites::drawSelfMasked(x, 37, font4x6_Full, digits[i] + 26);
    }
    
  }

  if (intro < 210) {

    drawFlyingPair();

  }

  Sprites::drawOverwrite(23, 38, splash_press_a, 0);


  // Handle key presses ..
  {
    uint8_t justPressed = arduboy.justPressedButtons();

    if (gameState == GameState::End_Of_Mission) {
      if (justPressed & A_BUTTON) { gameState = GameState::Game_Init; }
    }
    else {
      #ifndef HIGH_SCORES
      if ((pressed & UP_BUTTON) && (pressed & DOWN_BUTTON)) { EEPROM_Utils::initEEPROM(true); player.setScore(0); high = 0; }
      if (justPressed & A_BUTTON) { gameState = GameState::Intro_Init; }
      #else
      if (justPressed & A_BUTTON) { gameState = GameState::Save_Score; }
      #endif

    }

  }

}
