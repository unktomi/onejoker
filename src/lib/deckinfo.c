/* OneJoker library <https://github.com/lcrocker/OneJoker/>
 * Information on types of card decks.
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "onejoker.h"

/* standard */
int _oj_dt_0_cards[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,
        14,15,16,17,18,19,20,21,22,23,24,25,26,
        27,28,29,30,31,32,33,34,35,36,37,38,39,
        40,41,42,43,44,45,46,47,48,49,50,51,52 };

/* 1joker */
int _oj_dt_1_cards[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,
        14,15,16,17,18,19,20,21,22,23,24,25,26,
        27,28,29,30,31,32,33,34,35,36,37,38,39,
        40,41,42,43,44,45,46,47,48,49,50,51,52,53 };

/* 2jokers */
int _oj_dt_2_cards[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,
        14,15,16,17,18,19,20,21,22,23,24,25,26,
        27,28,29,30,31,32,33,34,35,36,37,38,39,
        40,41,42,43,44,45,46,47,48,49,50,51,52,53,54 };

/* stripped32 */
int _oj_dt_3_cards[] = { 6,7,8,9,10,11,12,13,
        19,20,21,22,23,24,25,26,
        32,33,34,35,36,37,38,39,
        45,46,47,48,49,50,51,52 };

/* stripped40 */
int _oj_dt_4_cards[] = { 1,2,3,4,5,6,10,11,12,13,
        14,15,16,17,18,19,23,24,25,26,
        27,28,29,30,31,32,36,37,38,39,
        40,41,42,43,44,45,49,50,51,52 };

/* stripped40j */
int _oj_dt_5_cards[] = { 1,2,3,4,5,6,10,11,12,13,
        14,15,16,17,18,19,23,24,25,26,
        27,28,29,30,31,32,36,37,38,39,
        40,41,42,43,44,45,49,50,51,52,53 };

oj_deck_info_t oj_deck_info[] = {
    { 52, _oj_dt_0_cards }, { 53, _oj_dt_1_cards },
    { 54, _oj_dt_2_cards }, { 32, _oj_dt_3_cards },
    { 40, _oj_dt_4_cards }, { 41, _oj_dt_5_cards }
};