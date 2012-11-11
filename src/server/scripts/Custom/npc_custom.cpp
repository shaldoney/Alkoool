#include "ScriptPCH.h"
#include "ScriptedEscortAI.h"
#include <sstream>

/*
SQL:
DELETE FROM `script_texts` WHERE `entry`= '-1700021';
INSERT INTO `script_texts` (`npc_entry`, `entry`, `content_default`, `comment`) VALUES ('34626', '-1700021', 'Bonjour $N, je me présente mon nom est Nere Poel... Je travaille ici sur le serveur comme récéptioniste... Mais dis moi tu ne serais pas nouveau toi ? ', 'Presentation pnj bienvenue');
DELETE FROM `script_texts` WHERE `entry`= '-1700022';
INSERT INTO `script_texts` (`npc_entry`, `entry`, `content_default`, `comment`) VALUES ('34626', '-1700022', 'Ah bah voila un nouveau hein!!! Bon entre nous tu seras sage hein!!!  Sinon pas de  Nere Poel l'année prochaine. AU fait un systéme de parrainage est à disposition pour que plein de tes amis puissent aussi recevoir leur cadeau ne sois pas égoiste présente leur le serveur. Allez courage jeune $C !!!', 'ACCEPETE pnj bienvenue');
DELETE FROM `script_texts` WHERE `entry`= '-1700023';
INSERT INTO `script_texts` (`npc_entry`, `entry`, `content_default`, `comment`) VALUES ('34626', '-1700023', 'Hehe !!! Salut $N alors le serveur te plait? Oublie pas de voter hein !!!', 'Refuse pnj bienvenue');



DELETE FROM `creature_template` WHERE `entry`='62201';
insert INTO `creature_template` VALUES (62201, 0, 0, 0, 0, 0, 15746, 0, 0, 0, 'Nere Poel', 'Le plus gentil de tous', '', 0, 85, 85, 0, 35, 35, 3, 1, 1.14286, 1.4, 1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '', 0, 3, 75, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 'npc_depart', 1);

UPDATE `creature_template` SET `ScriptName`='npc_depart' WHERE `entry`='62201';

INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 638, 1, 7, 0, 0, -1451.74, 1409.39, 35.5561, 6.27063, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 530, 1, 1, 0, 0, -4028.38, -13780.1, 74.7696, 3.02198, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 648, 1, 1, 0, 0, -8427.57, 1338.83, 102.341, 6.12682, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 530, 1, 1, 0, 0, 10351.7, -6358.39, 33.6943, 2.45013, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 1, 1, 1, 0, 0, -2911.82, -253.808, 59.5904, 0.0183251, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 0, 1, 1, 0, 0, -8914.18, -138.042, 80.8865, 2.17712, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 0, 1, 1, 0, 0, 1701.41, 1699.07, 135.02, 1.2103, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 0, 1, 1, 0, 0, -6230.81, 332.256, 383.155, 5.18756, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 1, 1, 1, 0, 0, 10315.6, 830.209, 1326.39, 2.87988, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 530, 1, 1, 0, 0, -3964.11, -13927.5, 100.548, 5.05951, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 0, 1, 1, 0, 0, -4981.4, 872.239, 274.31, 1.42157, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 1, 1, 1, 0, 0, -609.559, -4250.72, 38.9562, 3.14238, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);
INSERT INTO `creature` (`id`, `map`, `spawnMask`, `phaseMask`, `modelid`, `equipment_id`, `position_x`, `position_y`, `position_z`, `orientation`, `spawntimesecs`, `spawndist`, `currentwaypoint`, `curhealth`, `curmana`, `DeathState`, `MovementType`, `npcflag`, `unit_flags`, `dynamicflags`) VALUES (62201, 1, 1, 1, 0, 0, -1169.91, -5266.57, 0.856201, 2.62032, 300, 0, 0, 75, 0, 0, 0, 0, 0, 0);

*/

#define GOSSIP_PRESENT				"Vous etes qui ?"
#define GOSSIP_ACCEPT				"J'aimerais recuperer mon cadeau"

#define SAY_PRESENT                 -1700021
#define SAY_ACCEPT                  -1700022
#define SAY_REFUSE					-1700023


enum eEnum
{
	PRESENT,
	ACCEPT,

};

class npc_depart : public CreatureScript
{
public:
   npc_depart() : CreatureScript("npc_depart") { }

//----------------------------------------------------------------------------------------------------------------------------------------------------------
        bool OnGossipHello(Player* pPlayer, Creature* pCreature)
        {
		
			pPlayer->PlayerTalkClass->ClearMenus();
			pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_BATTLE, GOSSIP_PRESENT,GOSSIP_SENDER_MAIN,PRESENT);
			pPlayer->ADD_GOSSIP_ITEM(GOSSIP_ICON_BATTLE, GOSSIP_ACCEPT,GOSSIP_SENDER_MAIN,ACCEPT);
			
			 pPlayer->SendPreparedGossip(pCreature);
            return true;
        }
		

		
//------------------------------------------------------------------------------------------------------------------------------------------------------
                
        bool OnGossipSelect(Player* pPlayer, Creature* pCreature, uint32 /*sender*/, uint32 uiAction)
        {
			
		switch(uiAction)
		{
			case PRESENT:
				 DoScriptText(SAY_PRESENT,pCreature,pPlayer);
				pPlayer->CLOSE_GOSSIP_MENU();
				break;


		
			case ACCEPT:
				pPlayer->CLOSE_GOSSIP_MENU();

				if(pPlayer->getLevel()<=8 && pPlayer->GetMoney() <=50000){
				DoScriptText(SAY_ACCEPT,pCreature,pPlayer);
				pPlayer->SetMoney(100000);
				pPlayer->learnSpell(33388,false);//monte 75

				if(pPlayer->GetTeam() == HORDE){
					pPlayer->learnSpell(6654,false);//loup
				}

				if(pPlayer->GetTeam() == ALLIANCE){
					pPlayer->learnSpell(10793,false);//destrier
				}

				pPlayer->AddItem(30744,4);// 4 sacs 14 emplacements
				}
				else{
					DoScriptText(SAY_REFUSE,pCreature,pPlayer);
				}

				//pPlayer->NearTeleportTo(-975.96f,	1639.4f,	124.7f,	1.7f, false);
				break;
		
		}


			pPlayer->SendPreparedGossip(pCreature);


            return true;
        }
};

void AddSC_npc_custom()
{
    new npc_depart();
}