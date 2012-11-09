/*
 * Copyright (C) 2011 - 2012 ArkCORE <http://www.arkania.net/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEF_THRONE_OF_THE_FOUR_WINDS_H
#define DEF_THRONE_OF_THE_FOUR_WINDS_H

enum Data
{
    DATA_CONCLAVE_OF_WIND_EVENT,
    DATA_ALAKIR_EVENT,
};

enum Data64
{
    DATA_ANSHAL,
    DATA_NEZIR,
    DATA_ROHASH,
    DATA_ALAKIR,
};

enum CreatureIds
{
    BOSS_ANSHAL                     = 45870,
    BOSS_NEZIR                      = 45871,
    BOSS_ROHASH                     = 45872,

    BOSS_ALAKIR                     = 46753,

    // Conclave of Wind
    NPC_SOOTHING_BREEZE             = 46246,
    NPC_RAVENOUS_CREEPER            = 45812,
    NPC_RAVENOUS_CREEPER_TRIGGER    = 45813,
    NPC_ICE_PATCH                   = 46186,
};

enum InstanceSpells
{
    SPELL_PRE_COMBAT_EFFECT_ANSHAL  = 85537,
    SPELL_PRE_COMBAT_EFFECT_NEZIR   = 85532,
    SPELL_PRE_COMBAT_EFFECT_ROHASH  = 85538,
};

enum Spells
{
    // Anshal
    SPELL_SOOTHING_BREEZE           = 86205,
    SPELL_SOOTHING_BREEZE_SUMMON    = 86204,
    SPELL_SOOTHING_BREEZE_VISUAL    = 86208,

    SPELL_NURTURE                   = 85422,
    SPELL_NURTURE_DUMMY_AURA        = 85428,
    SPELL_NURTURE_CREEPER_SUMMON    = 85429,

    SPELL_ZEPHYR_ULTIMATE           = 84638,

    SPELL_WITHERING_WIND            = 85576,

    // Nezir
    SPELL_ICE_PATCH                 = 86122,
    SPELL_ICE_PATCH_VISUAL          = 86107,
    SPELL_ICE_PATCH_AURA            = 86111,

    SPELL_PERMAFROST                = 86082,
    SPELL_WIND_CHILL                = 84645,
    SPELL_CHILLING_WINDS            = 85578,

    SPELL_SLEET_STORM_ULTIMATE      = 84644,

    // Rohash
    SPELL_SLICING_GALE              = 86182,

    SPELL_WIND_BLAST                = 86193,
    SPELL_WIND_BLAST_EFFECT         = 85483,

    SPELL_HURRICANE_ULTIMATE        = 84643,

    SPELL_DEAFING_WINDS             = 85573,
};

enum Events
{
    // Anshal
    EVENT_SOOTHING_BREEZE           = 1,
    EVENT_NURTURE,

    // Nezir
    EVENT_ICE_PATCH,
    EVENT_PERMAFROST,
    EVENT_WIND_CHILL,
    EVENT_SLEET_STORM_ULTIMATE,

    // Rohash
    EVENT_SLICING_GALE,
    EVENT_WIND_BLAST,
    EVENT_HURRICANE,
};


#endif
