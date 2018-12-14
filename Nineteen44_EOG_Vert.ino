#include "src/Utils/Arduboy2Ext.h"

#ifdef ORIENTATION_VERT


/* -----------------------------------------------------------------------------------------------------------------------------
 *  End of mission / game loop ..
 * -----------------------------------------------------------------------------------------------------------------------------
 */
void endOfSequence_Render(bool endOfLevel) {

  if (gameState == GameState::End_Of_Mission) {

    Sprites::drawOverwrite(114, 0, mission_successful_1, 0);
    Sprites::drawOverwrite(101, 0, mission_successful_2, 0);

  }
  else {

    if (endOfLevel) {
      Sprites::drawOverwrite(114, 0, level_complete_1, 0);
      Sprites::drawOverwrite(101, 0, level_complete_2, 0);
    }
    else {
      Sprites::drawOverwrite(101, 0, game_over, 0);
    }

  }

  arduboy.drawVerticalDottedLine(0, HEIGHT, 97);
  arduboy.drawVerticalDottedLine(0, HEIGHT, 127);
  
}

void drawFlyingPair() {

  arduboy.fillRect(97, intro - 38, 127, 200, BLACK);
  Sprites::drawOverwrite(97, intro - 38, zero_S, 0);
  Sprites::drawOverwrite(111, intro - 20, zero_S, 0);
  intro++;

}

void endOfSequence(const uint8_t level) {

  bool endOfLevel = false;

  if (level == 0 && mission == 30) { gameState = GameState::End_Of_Game; endOfLevel = true; } 
  if (level == 1 && mission == 60) { gameState = GameState::End_Of_Game; endOfLevel = true; }

  #ifndef HIGH_SCORES
    uint16_t high = eeprom_read_word((uint16_t *)(EEPROM_SCORE + (level * 2)));
  #else
    uint16_t high = EEPROM_Utils::getHighScore();
  #endif

  if (player.getScore() > high) { 
    #ifndef HIGH_SCORES
    eeprom_update_word((uint16_t *)(EEPROM_SCORE + (level * 2)), player.getScore());
    #endif
    high = player.getScore();
  }

  endOfSequence_Render(endOfLevel); 

  if (intro < 210) {

    drawFlyingPair();

  }
  else {

      Sprites::drawOverwrite(68, 15, usaf, 0);


    // Score ..
    {

      Sprites::drawOverwrite(55, 21, score_img, 0);
      uint8_t digits[4] = {};
      extractDigits(digits, player.getScore());

      for (uint8_t i = 0, y = 38; i < 4; ++i, y -= 6) {
        Sprites::drawSelfMasked(45, y, numbers_vert, digits[i]);
      }
    
    }

    // Total ..
    {

      uint8_t digits[4] = {};
      Sprites::drawOverwrite(29, 13, highScore_img, 0);
      extractDigits(digits, high);
      
      for (uint8_t i = 0, y = 38; i < 4; ++i, y -= 6) {
        Sprites::drawSelfMasked(20, y, numbers_vert, digits[i]);
      }
      
    }

    Sprites::drawOverwrite(0, 15, splash_press_a, 0);
   
  }

  {
    uint8_t justPressed = arduboy.justPressedButtons();
    uint8_t pressed = arduboy.pressedButtons();

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

#endif