![DayZ Logo](https://dl.dropbox.com/u/23896685/DayZLingor/dayzlingor.jpg)




DayZLingor (Skaronator.com)
==========


Changelog
==========
DayZ Lingor Changelog:

			* You see now the damage in percent
			* Trash spawn now on the Road (Like Old Lingor Version v0.34)
			* AH6X_DZ Add (1.7.4)
			* and more...

1.7.5 Changelog:

			* [NEW]	Weapon - Sa58P_EP1. (Military)
			* [NEW]	Weapon - Sa58V_EP1. (Military)
			* [NEW]	Weapon - Sa58V_RCO_EP1. (MilitaryS)
			* [NEW]	Weapon - Sa58V_CCO_EP1. (MilitaryS)
			* [NEW]	Weapon - G36C. (HeliCrash)
			* [NEW]	Weapon - G36C_camo. (HeliCrash)
			* [NEW]	Weapon - G36A_camo. (HeliCrash)
			* [NEW]	Weapon - G36K_camo. (HeliCrash)
			* [NEW]	Weapon - M40A3 (MilitaryS)
			* [NEW] Vehicle - HMMWV.
			* [NEW] Vehicle - MH6J_DZ.
			* [NEW] - Ability to flip ATV's.
			* [NEW] - Zeds spawn while in vehicles.
			* [NEW] - Zeds now have the ability to damage vehicles. This is limited to glass only once glass is destroyed players within will be damaged.
			* [NEW] - Zeds now have the ability to pull you from open vehicles.
			* [NEW] - New Load screens added.
			* [NEW] - Chopper weapons can now be reloaded.
			* [NEW] - UH60Wreck added
			* [NEW] - New zed & loot spawn systems rewrote Phase 1.
			* [NEW] - Revamped GUI icons to now empty as you lose the relevent item (blood,food,water) Thanks Des
			* [NEW] - Infection changes when eating cooked food and drinking water. (tin and canned items don't count)
			* [NEW] - Epeen monitor added to display player stats. (Zombies Killed, Headshots, Murders, Bandits Killed, Humanity) - Press Scroll Lock to use
			* [NEW] - Peripheral Dots removed fully.
			* [NEW] - Toolbox is now needed to build Wire,tanktrap.
			* [NEW] - Etool is now needed to build Sandbags.
			* [NEW] - 5 New types of food ("FoodmuttonCooked","FoodchickenCooked","FoodBaconCooked","HIDDEN","FooedRabbitCooked").
			* [NEW] - 4 New Raw food. ("FoodbaconRaw","FoodchickenRaw","FoodmuttonRaw","foodrabbitRaw")
			* [NEW] - Bloodbags now has an infection chance.
			* [NEW] - Added moving combat roll (KK's Volt).
			* [NEW] - Survived Dayz added to Epeen monitor
			
			
			***** Not added to the dev builds *****
			** [NEW] - Basic Anti teleport script.
		
			* [UPDATED] - BAF_L85A2_RIS_CWS replaced with BAF_L85A2_RIS_Holo. (HeliCrash)
			* [UPDATED] - Added a much faster login process. (Advantages: Login Speed up)
			* [UPDATED] - Limted amount of ammo found with weapons.
			* [UPDATED] - Gender selection images updated thanks Des.
			* [UPDATED] - Updated infection chance during zed attacks from 1/1000 to 1/500.
			* [UPDATED] - Changed Loot tables to increase the supply of Antibiotic drops.
			* [UPDATED] - Combat Mode is now affected by everything you do and everything done to you (example any kind of damage).			
			* [UPDATED] - Updated Mi17_DZ and UH1H_DZ to max ammo Max 100 rounds per gun.
			* [UPDATED] - UH1 Crash sites no longer all spawn on server start but throughout the game.
			* [UPDATED] - Damage processing for zombieattacks with prebuilded weighted arrays. (Advantages: speedup and saves a lot of cpu cycles)
			* [UPDATED] - Loot chance reworked, Result should now be instant spawn loot.
			* [UPDATED] - Much faster fn_instring.
			* [UPDATED] - Cargo space redo.
				MI17_DZ ( transportMaxWeapons = 10;, transportMaxMagazines = 50;, transportmaxbackpacks = 10; )
				UH1H_DZ ( transportMaxWeapons = 5;, transportMaxMagazines = 25;, transportmaxbackpacks = 4; )
				AH6_DZ ( transportMaxWeapons = 3;, transportMaxMagazines = 10;, transportmaxbackpacks = 2; )
				Mh6J_DZ ( transportMaxWeapons = 3;, transportMaxMagazines = 20;, transportmaxbackpacks = 0; )
				AN2_DZ ( transportMaxWeapons = 10;, transportMaxMagazines = 80;, transportmaxbackpacks = 15; )
			* [UPDATED] - CZ_VestPouch_EP1 to be more useful 12 slots 0 weapon slots.
			* [UPDATED] - Zeds will talk to other zeds within 80 meter.
			* [UPDATED] - Combat Logging is now active during Zombie chase.
			* [UPDATED] - Backpacks updated. (https://github.com/R4Z0R49/DayZMod/wiki/Backpacks)
			* [UPDATED] - Animal Meat reset. 2(Default),4(sheep),4(goat),4(boar),8(cow)
			* [UPDATED] - Epeen monitor moved to scroll lock key and work started on moving to diary
			* [UDDATED] - Massive cleanup remove all useless files.
			* [UPDATED] - Redone all public EH's
			* [UPDTAED] - Combat/zombie logout + anti-duping overhall - (https://github.com/R4Z0R49/DayZMod/commit/44321a6856f5fd2d5544d1293c2450f9b2df6fbd)
			* [UPDATED] - String tables to include = English, German, Russian, Spanish, Dutch, French

			
			* [Fixed] - Zeds hearing should now be fixed.
			* [Fixed] - Temperature icon color now ranges from iceblue (cold) to red (hot)
			* [Fixed] - German Tranlations updated.
			* [Fixed] - mi17 gunner seat is now fixed (you no longer stand outside)
			* [Fixed] - Bloodbag glitch fixed.
			* [Fixed] - UH1Y_DZ animation issues.
			* [Fixed] - Infection is now fixed loss of blood 3 per sec (will not drop below 3k blood)
			* [FIXED] - Epeen monitor animation should now work correct without the fps drop.
			* [FIXED] - DZ_Czech_Vest_Puch backpack class config. (Warning Message: No entry 'bin\config.bin/CfgMagazines.DZ_Czech_Vest_Puch'.)
			* [FIXED] - Variable spelling mistakes hsould be corrected now.
			* [FIXED] - Moved all new foods to stringtable.
			* [FIXED] - Fixed infection chance when giving blood.(No longer applys to player giving blood) :-(
			* [FIXED] - ALT F4 Sync issue now fixed

			* [REMOVED]	- BAF_L85A2_RIS_CWS (Based on poll)
			* [REMOVED]	- Banned m136 as it never really worked and served no real purpose.
			* [REMOVED] - In Combat bot removed while we work on speed improvements.
			* [REMOVED] - MPTable now removed.
			* [REMOVED] - Peripheral Vision. (Peripheral Dots)
			* [REMOVED] - Axes now have a small chance to fail due to them being blunt (others later) 9% Chance. ** Can still be used as weapon **
			* [REMOVED] - Matches can now run out (others later) 9% Chance. (at this time this is a random chance)
			* [REMOVED] - Knife will now have a chance to go blunt causing it to give less food from gutting animals 9% chance(Blunt), 50% less food(Guting)
			* [REMOVED] - You can now longer apply more then one bloodbag per 10 mins per player
			* [REMOVED] - You can no longer regain blood from cooked food for 1 hour after eating. (ie spamming cooked meat to regain hp)
			* [REMOVED] - No longer need tool box to place bear traps.
			* [REMOVED] - You can no longer consume food while your not hungry (within 3 mins of eating)
			* [REMOVED] - You can no longer drink while your not thirsty (within 3 mins of drinking)
			* [REMOVED] - 6 New items added to loot tables. (Inplace of item lockup or braking)
			* [REMOVED] - Food models removed
			
		Hive:
			* [Prerequisites]	beta-patch 99806 - Pending updated to newest version.
			* [Prerequisites]	Microsoft Visual C++ 2010 SP1 x86 Redistributable (http://www.microsoft.com/en-us/download/details.aspx?id=8328)
			
			* [NEW] - Added new constraint to block non Dayz items from being wrote to the db

			* [UPDATED] - Publish Object will now only publish items allowed. (tents, other deployables)
			* [UPDATED] - Updated Basic SQL Procs.

			* [Fixed] - Crash issue on stale child calls

			* [REMOVED]
