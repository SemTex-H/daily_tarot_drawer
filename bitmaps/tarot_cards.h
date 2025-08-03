#ifndef TAROT_CARDS_H
#define TAROT_CARDS_H

#include "major_arcana_chariot.h"
#include "major_arcana_death.h"
#include "major_arcana_devil.h"
#include "major_arcana_emperor.h"
#include "major_arcana_empress.h"
#include "major_arcana_fool.h"
#include "major_arcana_fortune.h"
#include "major_arcana_hanged.h"
#include "major_arcana_hermit.h"
#include "major_arcana_hierophant.h"
#include "major_arcana_judgement.h"
#include "major_arcana_justice.h"
#include "major_arcana_lovers.h"
#include "major_arcana_magician.h"
#include "major_arcana_moon.h"
#include "major_arcana_priestess.h"
#include "major_arcana_star.h"
#include "major_arcana_strength.h"
#include "major_arcana_sun.h"
#include "major_arcana_temperance.h"
#include "major_arcana_tower.h"
#include "major_arcana_world.h"
#include "minor_arcana_cups_10.h"
#include "minor_arcana_cups_2.h"
#include "minor_arcana_cups_3.h"
#include "minor_arcana_cups_4.h"
#include "minor_arcana_cups_5.h"
#include "minor_arcana_cups_6.h"
#include "minor_arcana_cups_7.h"
#include "minor_arcana_cups_8.h"
#include "minor_arcana_cups_9.h"
#include "minor_arcana_cups_ace.h"
#include "minor_arcana_cups_king.h"
#include "minor_arcana_cups_knight.h"
#include "minor_arcana_cups_page.h"
#include "minor_arcana_cups_queen.h"
#include "minor_arcana_pentacles_10.h"
#include "minor_arcana_pentacles_2.h"
#include "minor_arcana_pentacles_3.h"
#include "minor_arcana_pentacles_4.h"
#include "minor_arcana_pentacles_5.h"
#include "minor_arcana_pentacles_6.h"
#include "minor_arcana_pentacles_7.h"
#include "minor_arcana_pentacles_8.h"
#include "minor_arcana_pentacles_9.h"
#include "minor_arcana_pentacles_ace.h"
#include "minor_arcana_pentacles_king.h"
#include "minor_arcana_pentacles_knight.h"
#include "minor_arcana_pentacles_page.h"
#include "minor_arcana_pentacles_queen.h"
#include "minor_arcana_swords_10.h"
#include "minor_arcana_swords_2.h"
#include "minor_arcana_swords_3.h"
#include "minor_arcana_swords_4.h"
#include "minor_arcana_swords_5.h"
#include "minor_arcana_swords_6.h"
#include "minor_arcana_swords_7.h"
#include "minor_arcana_swords_8.h"
#include "minor_arcana_swords_9.h"
#include "minor_arcana_swords_ace.h"
#include "minor_arcana_swords_king.h"
#include "minor_arcana_swords_knight.h"
#include "minor_arcana_swords_page.h"
#include "minor_arcana_swords_queen.h"
#include "minor_arcana_wands_10.h"
#include "minor_arcana_wands_2.h"
#include "minor_arcana_wands_3.h"
#include "minor_arcana_wands_4.h"
#include "minor_arcana_wands_5.h"
#include "minor_arcana_wands_6.h"
#include "minor_arcana_wands_7.h"
#include "minor_arcana_wands_8.h"
#include "minor_arcana_wands_9.h"
#include "minor_arcana_wands_ace.h"
#include "minor_arcana_wands_king.h"
#include "minor_arcana_wands_knight.h"
#include "minor_arcana_wands_page.h"
#include "minor_arcana_wands_queen.h"

#include "major_arcana_chariot_rev.h"
#include "major_arcana_death_rev.h"
#include "major_arcana_devil_rev.h"
#include "major_arcana_emperor_rev.h"
#include "major_arcana_empress_rev.h"
#include "major_arcana_fool_rev.h"
#include "major_arcana_fortune_rev.h"
#include "major_arcana_hanged_rev.h"
#include "major_arcana_hermit_rev.h"
#include "major_arcana_hierophant_rev.h"
#include "major_arcana_judgement_rev.h"
#include "major_arcana_justice_rev.h"
#include "major_arcana_lovers_rev.h"
#include "major_arcana_magician_rev.h"
#include "major_arcana_moon_rev.h"
#include "major_arcana_priestess_rev.h"
#include "major_arcana_star_rev.h"
#include "major_arcana_strength_rev.h"
#include "major_arcana_sun_rev.h"
#include "major_arcana_temperance_rev.h"
#include "major_arcana_tower_rev.h"
#include "major_arcana_world_rev.h"
#include "minor_arcana_cups_10_rev.h"
#include "minor_arcana_cups_2_rev.h"
#include "minor_arcana_cups_3_rev.h"
#include "minor_arcana_cups_4_rev.h"
#include "minor_arcana_cups_5_rev.h"
#include "minor_arcana_cups_6_rev.h"
#include "minor_arcana_cups_7_rev.h"
#include "minor_arcana_cups_8_rev.h"
#include "minor_arcana_cups_9_rev.h"
#include "minor_arcana_cups_ace_rev.h"
#include "minor_arcana_cups_king_rev.h"
#include "minor_arcana_cups_knight_rev.h"
#include "minor_arcana_cups_page_rev.h"
#include "minor_arcana_cups_queen_rev.h"
#include "minor_arcana_pentacles_10_rev.h"
#include "minor_arcana_pentacles_2_rev.h"
#include "minor_arcana_pentacles_3_rev.h"
#include "minor_arcana_pentacles_4_rev.h"
#include "minor_arcana_pentacles_5_rev.h"
#include "minor_arcana_pentacles_6_rev.h"
#include "minor_arcana_pentacles_7_rev.h"
#include "minor_arcana_pentacles_8_rev.h"
#include "minor_arcana_pentacles_9_rev.h"
#include "minor_arcana_pentacles_ace_rev.h"
#include "minor_arcana_pentacles_king_rev.h"
#include "minor_arcana_pentacles_knight_rev.h"
#include "minor_arcana_pentacles_page_rev.h"
#include "minor_arcana_pentacles_queen_rev.h"
#include "minor_arcana_swords_10_rev.h"
#include "minor_arcana_swords_2_rev.h"
#include "minor_arcana_swords_3_rev.h"
#include "minor_arcana_swords_4_rev.h"
#include "minor_arcana_swords_5_rev.h"
#include "minor_arcana_swords_6_rev.h"
#include "minor_arcana_swords_7_rev.h"
#include "minor_arcana_swords_8_rev.h"
#include "minor_arcana_swords_9_rev.h"
#include "minor_arcana_swords_ace_rev.h"
#include "minor_arcana_swords_king_rev.h"
#include "minor_arcana_swords_knight_rev.h"
#include "minor_arcana_swords_page_rev.h"
#include "minor_arcana_swords_queen_rev.h"
#include "minor_arcana_wands_10_rev.h"
#include "minor_arcana_wands_2_rev.h"
#include "minor_arcana_wands_3_rev.h"
#include "minor_arcana_wands_4_rev.h"
#include "minor_arcana_wands_5_rev.h"
#include "minor_arcana_wands_6_rev.h"
#include "minor_arcana_wands_7_rev.h"
#include "minor_arcana_wands_8_rev.h"
#include "minor_arcana_wands_9_rev.h"
#include "minor_arcana_wands_ace_rev.h"
#include "minor_arcana_wands_king_rev.h"
#include "minor_arcana_wands_knight_rev.h"
#include "minor_arcana_wands_page_rev.h"
#include "minor_arcana_wands_queen_rev.h"

const unsigned char* gImage_tarot_cards[200] = {
    gImage_major_arcana_chariot,
    gImage_major_arcana_death,
    gImage_major_arcana_devil,
    gImage_major_arcana_emperor,
    gImage_major_arcana_empress,
    gImage_major_arcana_fool,
    gImage_major_arcana_fortune,
    gImage_major_arcana_hanged,
    gImage_major_arcana_hermit,
    gImage_major_arcana_hierophant,
    gImage_major_arcana_judgement,
    gImage_major_arcana_justice,
    gImage_major_arcana_lovers,
    gImage_major_arcana_magician,
    gImage_major_arcana_moon,
    gImage_major_arcana_priestess,
    gImage_major_arcana_star,
    gImage_major_arcana_strength,
    gImage_major_arcana_sun,
    gImage_major_arcana_temperance,
    gImage_major_arcana_tower,
    gImage_major_arcana_world,
    gImage_minor_arcana_cups_10,
    gImage_minor_arcana_cups_2,
    gImage_minor_arcana_cups_3,
    gImage_minor_arcana_cups_4,
    gImage_minor_arcana_cups_5,
    gImage_minor_arcana_cups_6,
    gImage_minor_arcana_cups_7,
    gImage_minor_arcana_cups_8,
    gImage_minor_arcana_cups_9,
    gImage_minor_arcana_cups_ace,
    gImage_minor_arcana_cups_king,
    gImage_minor_arcana_cups_knight,
    gImage_minor_arcana_cups_page,
    gImage_minor_arcana_cups_queen,
    gImage_minor_arcana_pentacles_10,
    gImage_minor_arcana_pentacles_2,
    gImage_minor_arcana_pentacles_3,
    gImage_minor_arcana_pentacles_4,
    gImage_minor_arcana_pentacles_5,
    gImage_minor_arcana_pentacles_6,
    gImage_minor_arcana_pentacles_7,
    gImage_minor_arcana_pentacles_8,
    gImage_minor_arcana_pentacles_9,
    gImage_minor_arcana_pentacles_ace,
    gImage_minor_arcana_pentacles_king,
    gImage_minor_arcana_pentacles_knight,
    gImage_minor_arcana_pentacles_page,
    gImage_minor_arcana_pentacles_queen,
    gImage_minor_arcana_swords_10,
    gImage_minor_arcana_swords_2,
    gImage_minor_arcana_swords_3,
    gImage_minor_arcana_swords_4,
    gImage_minor_arcana_swords_5,
    gImage_minor_arcana_swords_6,
    gImage_minor_arcana_swords_7,
    gImage_minor_arcana_swords_8,
    gImage_minor_arcana_swords_9,
    gImage_minor_arcana_swords_ace,
    gImage_minor_arcana_swords_king,
    gImage_minor_arcana_swords_knight,
    gImage_minor_arcana_swords_page,
    gImage_minor_arcana_swords_queen,
    gImage_minor_arcana_wands_10,
    gImage_minor_arcana_wands_2,
    gImage_minor_arcana_wands_3,
    gImage_minor_arcana_wands_4,
    gImage_minor_arcana_wands_5,
    gImage_minor_arcana_wands_6,
    gImage_minor_arcana_wands_7,
    gImage_minor_arcana_wands_8,
    gImage_minor_arcana_wands_9,
    gImage_minor_arcana_wands_ace,
    gImage_minor_arcana_wands_king,
    gImage_minor_arcana_wands_knight,
    gImage_minor_arcana_wands_page,
    gImage_minor_arcana_wands_queen,
    gImage_major_arcana_chariot_rev,
    gImage_major_arcana_death_rev,
    gImage_major_arcana_devil_rev,
    gImage_major_arcana_emperor_rev,
    gImage_major_arcana_empress_rev,
    gImage_major_arcana_fool_rev,
    gImage_major_arcana_fortune_rev,
    gImage_major_arcana_hanged_rev,
    gImage_major_arcana_hermit_rev,
    gImage_major_arcana_hierophant_rev,
    gImage_major_arcana_judgement_rev,
    gImage_major_arcana_justice_rev,
    gImage_major_arcana_lovers_rev,
    gImage_major_arcana_magician_rev,
    gImage_major_arcana_moon_rev,
    gImage_major_arcana_priestess_rev,
    gImage_major_arcana_star_rev,
    gImage_major_arcana_strength_rev,
    gImage_major_arcana_sun_rev,
    gImage_major_arcana_temperance_rev,
    gImage_major_arcana_tower_rev,
    gImage_major_arcana_world_rev,
    gImage_minor_arcana_cups_10_rev,
    gImage_minor_arcana_cups_2_rev,
    gImage_minor_arcana_cups_3_rev,
    gImage_minor_arcana_cups_4_rev,
    gImage_minor_arcana_cups_5_rev,
    gImage_minor_arcana_cups_6_rev,
    gImage_minor_arcana_cups_7_rev,
    gImage_minor_arcana_cups_8_rev,
    gImage_minor_arcana_cups_9_rev,
    gImage_minor_arcana_cups_ace_rev,
    gImage_minor_arcana_cups_king_rev,
    gImage_minor_arcana_cups_knight_rev,
    gImage_minor_arcana_cups_page_rev,
    gImage_minor_arcana_cups_queen_rev,
    gImage_minor_arcana_pentacles_10_rev,
    gImage_minor_arcana_pentacles_2_rev,
    gImage_minor_arcana_pentacles_3_rev,
    gImage_minor_arcana_pentacles_4_rev,
    gImage_minor_arcana_pentacles_5_rev,
    gImage_minor_arcana_pentacles_6_rev,
    gImage_minor_arcana_pentacles_7_rev,
    gImage_minor_arcana_pentacles_8_rev,
    gImage_minor_arcana_pentacles_9_rev,
    gImage_minor_arcana_pentacles_ace_rev,
    gImage_minor_arcana_pentacles_king_rev,
    gImage_minor_arcana_pentacles_knight_rev,
    gImage_minor_arcana_pentacles_page_rev,
    gImage_minor_arcana_pentacles_queen_rev,
    gImage_minor_arcana_swords_10_rev,
    gImage_minor_arcana_swords_2_rev,
    gImage_minor_arcana_swords_3_rev,
    gImage_minor_arcana_swords_4_rev,
    gImage_minor_arcana_swords_5_rev,
    gImage_minor_arcana_swords_6_rev,
    gImage_minor_arcana_swords_7_rev,
    gImage_minor_arcana_swords_8_rev,
    gImage_minor_arcana_swords_9_rev,
    gImage_minor_arcana_swords_ace_rev,
    gImage_minor_arcana_swords_king_rev,
    gImage_minor_arcana_swords_knight_rev,
    gImage_minor_arcana_swords_page_rev,
    gImage_minor_arcana_swords_queen_rev,
    gImage_minor_arcana_wands_10_rev,
    gImage_minor_arcana_wands_2_rev,
    gImage_minor_arcana_wands_3_rev,
    gImage_minor_arcana_wands_4_rev,
    gImage_minor_arcana_wands_5_rev,
    gImage_minor_arcana_wands_6_rev,
    gImage_minor_arcana_wands_7_rev,
    gImage_minor_arcana_wands_8_rev,
    gImage_minor_arcana_wands_9_rev,
    gImage_minor_arcana_wands_ace_rev,
    gImage_minor_arcana_wands_king_rev,
    gImage_minor_arcana_wands_knight_rev,
    gImage_minor_arcana_wands_page_rev,
    gImage_minor_arcana_wands_queen_rev,
};


#endif // TAROT_CARDS_H